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
	  <?php print $user_picture; ?>
	  <div class="answer-content">	
      <?php if ($title): ?>
        <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
	 
		<?php	if (($user->uid == 1) || ($uid == $user->uid) || (in_array('Editor', array_values($user->roles)))) {
		  print '<a class="edit-link" href="?q=node/'.$node->nid.'/edit" class="edit-link">Edit this question</a>';
		}
		?>
		
      <?php if ($display_submitted): ?>
      
		 <p class="submitted">
			Asked by <?php print $name; ?> <?php print format_date($created, $type = 'time_ago', $format = '', $timezone = NULL, $langcode = NULL);
			?>
        </p>
      <?php endif; ?>
	 <?php print render($content['field_question_details']); ?>
	<?php if (!empty($content['field_official_answer'])): ?>
		<div class="official-answer">
	 		<?print render($content['field_official_answer']); ?>
		</div>
	<?php endif; ?>
	 <p><a class="answer-this" href="#comment-form" title="Answer This">Answer This</a></p>
	 </div> <!-- /answer-content -->
      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    
  ?>

  <?php print render($content['comments']); ?>
	<?php if (!$logged_in): ?>
		<div id="comment-form">
		<h2 class="comments__form-title title comment-form">Answer this Question</h2>
		<?php print l('Login', 'user'); ?> or <?php print l('Sign Up', 'user/register'); ?> to answer this question.
		</div>
	<?php endif;?>

</article>
