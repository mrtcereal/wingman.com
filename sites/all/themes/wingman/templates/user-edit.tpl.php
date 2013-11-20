<?php
/**
 * @file
 * Returns HTML for a picture configured for the user's account.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728110
 */
?>

<?php print render($form['form_id']);
print render($form['form_build_id']);
print render($form['form_token']);

print render ($form['account']);

print render ($form['field_first_name']);
print render ($form['field_last_name']);

?>

<input type="submit" name="op" id="edit-submit" value="Save"  />
