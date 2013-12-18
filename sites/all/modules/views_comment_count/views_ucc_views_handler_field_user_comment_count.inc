<!--?php
$users = db_query(SELECT COUNT(cid) AS count, name, uid FROM comment GROUP BY uid, name ORDER BY count DESC LIMIT 10);
$output = "<ul>";
while ($user = db_fetch_object($users)) {
  $output .= "<li>" . $user->name . $user->count </li>";
}
$output .= "</ul>";
echo $output;
?>-->

<?php
$result = db_query('SELECT COUNT(cid) AS count, name, uid FROM comment GROUP BY uid, name ORDER BY count DESC LIMIT 10');
// Result is returned as a iterable object that returns a stdClass object on each iteration
foreach ($result as $record) {
  // Perform operations on $record->title, etc. here.
  // in this example the available data would be mapped to object properties:
  // $record->nid, $record->title, $record->created
	$user_fields = user_load($record->uid);
	 $firstname = $user_fields->field_first_name['und']['0']['value'];
     $lastname = $user_fields->field_last_name['und']['0']['value'];
	 
echo $firstname . $lastname . $record->count;
//print theme('user_picture', array('account' =>$user_fields));
if($user_fields->picture){
               print theme_image_style( array('style_name' => 'thumbnail','path' => $user_fields->uri,'attributes' => array('class' => 'avatar' )));
                } else { 
                 //   echo '<img src="' .$base_url . '/sites/default/files/default-user-image.jpg" />';
				print l(theme_image_style( array('style_name' => 'thumbnail','path' => path_to_theme().'/images/default-user-image.jpg','attributes' => array('class' => 'avatar' ))), 'user/' . $record->uid, array('html' => 'true'));
				//print l(theme('image', array('path'=>path_to_theme().'/images/default-user-image.jpg')), 'user/' . $record->uid, array('html' => 'true'));
                }
print $record->uid;

}
?>



<?php
$result = db_query('SELECT COUNT(cid) AS count, name, uid FROM comment GROUP BY uid, name ORDER BY count DESC LIMIT 10');
// Result is returned as a iterable object that returns a stdClass object on each iteration
foreach ($result as $record) {
  // Perform operations on $record->title, etc. here.
  // in this example the available data would be mapped to object properties:
  // $record->nid, $record->title, $record->created
echo $record->name;
}
?>




<?php
$result = db_query('SELECT COUNT(cid) AS count, name, uid FROM comment GROUP BY uid, name ORDER BY count DESC LIMIT 10');
// Result is returned as a iterable object that returns a stdClass object on each iteration
foreach ($result as $record) {
  // Perform operations on $record->title, etc. here.
  // in this example the available data would be mapped to object properties:
  // $record->nid, $record->title, $record->created
	 $user_fields = user_load($record->uid);
	 $firstname = $user_fields->field_first_name['und']['0']['value'];
     $lastname = $user_fields->field_last_name['und']['0']['value'];
	 $fullname = $firstname . ' ' . $lastname;
	 

		print '<ul><li>';
			if($user_fields->picture){
               print theme('user_picture', array('account' =>$user_fields));
                } else { 
                 //   echo '<img src="' .$base_url . '/sites/default/files/default-user-image.jpg" />';
				print l(theme('image', array('path'=>path_to_theme().'/images/default-user-image.jpg')), 'user/' . $record->uid, array('html' => 'true'));
             }
			print l(t($fullname), 'user/' . $record->uid) . '<br /><span>' . $record->count . ' answers</span>';
		print '</li></ul>';
}
?>