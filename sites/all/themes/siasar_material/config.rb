# Optional manual installation
# gem install --no-doc compass-flexbox toolkit singularitygs autoprefixer-rails

# Require any additional compass plugins here.
require 'compass-flexbox'
require 'toolkit'
require 'singularitygs'
require 'autoprefixer-rails'

# Set this to the root of your project when deployed:
http_path = "/sites/all/themes/siasar_material"
css_dir = "css"
sass_dir = "sass"
images_dir = "images"
javascripts_dir = "js"

# Change this to :production when ready to deploy the CSS to the live server.
# Note: If you are using grunt.js, these variables will be overriden.
environment = :development
#environment = :production

# Source maps
sourcemap = true

# To enable relative paths to assets via compass helper functions. Since Drupal themes can be installed in multiple locations, we shouldn't need to worry about the absolute path to the theme from the server root.
relative_assets = true

# To enable debugging comments that display the original location of your selectors. Comment:
line_comments = false

# In development, we can turn on the debug_info to use with FireSass or Chrome Web Inspector. Uncomment:
#debug = true

Encoding.default_external = "UTF-8"


# Autoprefixer hook
on_stylesheet_saved do |file|
  css = File.read(file)
  map = file + '.map'

  if File.exists? map
    result = AutoprefixerRails.process(css,
      from: file,
      to:   file,
      map:  { prev: File.read(map), inline: false })
    File.open(file, 'w') { |io| io << result.css }
    File.open(map,  'w') { |io| io << result.map }
  else
    File.open(file, 'w') { |io| io << AutoprefixerRails.process(css) }
  end
end


##############################
## You probably don't need to edit anything below this.
##############################

# Disable cache busting on image assets
asset_cache_buster :none

# You can select your preferred output style here (can be overridden via the command line):
# output_style = :expanded or :nested or :compact or :compressed
output_style = (environment == :development) ? :expanded : :compressed

# Pass options to sass. For development, we turn on the FireSass-compatible
# debug_info if the debug config variable above is true.
sass_options = (environment == :development && debug == true) ? {:debug_info => true} : {}
