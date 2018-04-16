(function($) {
  Drupal.behaviors.siasar_entityform_edit_workflow_comment = {
    attach: function(context, settings) {
      if (context === document) {
        var selectors = settings.siasar_entityform_alter.workflowComment.selectors;

        var workflow_selector = [
          '.workflow-transition-container .form-item-workflow-comment',
          '.workflow-transition-container .form-item-field-status-und-0-workflow-workflow-comment'
        ];
        var $comment = $(workflow_selector.join(', '));

        $(selectors.join(', ')).click(function(e) {
          var $btn = $(this);

          if (!$btn.is('.run-btn')) {
            e.preventDefault();

            var $colorbox_content = $comment.clone();
            $btn.clone().appendTo($colorbox_content).click(function() {
              $comment.find('textarea').val($colorbox_content.find('textarea').val());
              $btn.addClass('run-btn').click();
              $.colorbox.close();
            });

            $.colorbox({
              inline: true,
              href: $colorbox_content
            });
          }

        });
      }
    },
  };
})(jQuery);
