<?php
/**
 * @file
 * Modify's user registration form.
 *
 */
?>


<?php 
  print render($form['form_id']);
  print render($form['form_build_id']);
  print render($form['account']['mail']);
  print render ($form['field_first_name']);
  print render ($form['field_last_name']);
  print render ($form['field_user_location']);
  print drupal_render($form['actions']);



?>





