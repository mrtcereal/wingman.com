<?php

/**
 * Implements hook_views_data()
 */
function views_ucc_views_data() {
  return array(
    'views' => array(
      'user_comment_count' => array(
        'title' => t('Comment count'),
        'help' => t('Number of user comments'),
        'group' => t('User'),
        'field'  => array(
          'handler' => 'views_ucc_views_handler_field_user_comment_count',
        ),
        'sort' => array(
          'handler' => 'views_ucc_views_handler_sort_user_comment_count',
        ),
      ),
    ),
  );
}
