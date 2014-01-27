<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>	

<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
		
      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>
	  

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
	<?php endif; ?>
	
	
	<div class="event-image">
		<?php if(isset($node->field_event_logo['und'][0]['value'])) {
			print "<img src='" . $node->field_event_logo['und'][0]['value'] ."'/ >"; 
			} else {
				print render($content['field_event_image']);
			}?>
	
	</div>
	
	
	
	
	<div class="event-info">
		
		<?php if ($title): ?>
	        <h2<?php print $title_attributes; ?>><?php print $title; ?></a></h2>
	      <?php endif; ?>
		<?php	if (($user->uid == 1) || ($uid == $user->uid) || (in_array('Editor', array_values($user->roles)))) {
		  print '<a class="edit-link" href="?q=node/'.$node->nid.'/edit" class="edit-link">Edit this event</a>';
		}
		?>
		<?php 	
			// Location Details
				if (isset($node->field_event_location['und'][0]['name'])) {$venue = $node->field_event_location['und'][0]['name'];}
				if (isset($node->field_event_location['und'][0]['street'])) {$street = $node->field_event_location['und'][0]['street'];}
				if (isset($node->field_event_location['und'][0]['city'])) {$city = $node->field_event_location['und'][0]['city'];}
				if (isset($node->field_event_location['und'][0]['province'])) {$state = $node->field_event_location['und'][0]['province'];}
				if (isset($node->field_event_location['und'][0]['postal_code'])) {$zipcode = $node->field_event_location['und'][0]['postal_code']; }
				
				
				
		?>
		
		<?php print render($content['field_event_date']); ?>
		
		<p class="event-venue"><?php if($venue):?><?php print $venue; ?><?php endif ?></p>
		<p class="event-address"><?php if($street):?><?php print $street . ' | '; ?><?php endif ?>  <?php if($city):?><?php print $city; ?><?php endif ?>, <?php if($state):?><?php print $state; ?><?php endif ?> <?php if($zipcode):?><?php print $zipcode; ?><?php endif ?>
			<br />
			<?php if($street && $city && $state && $zipcode): ?>
			<?php print '<a target="_blank" href="http://maps.google.com/?q=' . $street . ',' . $city . ',' . $state . ',' . $zipcode . '">Map it</a>'; ?>
			<?php endif; ?>
			</p>
		
			
		<p class="attend-event-link"><?php print flag_create_link('attend_event', $node->nid); ?></p>
	</div>
	<div class="event-details">
		<h2 class="event-details-title">Event info</h2>
		<?php print render($content['field_event_category']); ?>
		<?php print render($content['field_event_description']); ?>
		
	</div>

</article>


