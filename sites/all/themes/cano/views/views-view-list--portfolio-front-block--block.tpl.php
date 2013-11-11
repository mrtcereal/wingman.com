
<?php if (!empty($title)) : ?>

    <h3><?php print $title; ?></h3>

  <?php endif; ?>

<div class="portfolio clearfix">          
<ul>
 <?php foreach ($rows as $id => $row): ?>
<li class="<?php print $classes_array[$id]; ?>">
<?php print $row; ?>
</li>
 <?php endforeach; ?>
</ul>
</div>

