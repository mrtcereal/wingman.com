<?php

class views_ucc_views_handler_sort_user_comment_count extends views_handler_sort {
  function query() {
    $this->ensure_my_table();
    $this->query->add_orderby(NULL, NULL, $this->options['order'], 'user_comment_count');
  }
}
