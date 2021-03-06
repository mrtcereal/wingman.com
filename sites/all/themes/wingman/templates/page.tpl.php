<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<div id="wrapper">

<div id="user-menu-bar">
	<div id="user-menu-bar-inner">
		<?php print render($page['user_menu_bar']); ?>
	</div>
</div>
<header class="header" id="header" role="banner">
	<div id="header-inner" class="container_12">
   <?php if ($logo): ?>
     <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
   <?php endif; ?>

   <?php if ($site_name || $site_slogan): ?>
     <div class="header__name-and-slogan" id="name-and-slogan">
       <?php if ($site_name): ?>
         <h1 class="header__site-name" id="site-name">
           <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
         </h1>
       <?php endif; ?>

       <?php if ($site_slogan): ?>
         <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
       <?php endif; ?>
     </div>
   <?php endif; ?>

   <?php if ($secondary_menu): ?>
     <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
       <?php print theme('links__system_secondary_menu', array(
         'links' => $secondary_menu,
         'attributes' => array(
           'class' => array('links', 'inline', 'clearfix'),
         ),
         'heading' => array(
           'text' => $secondary_menu_heading,
           'level' => 'h2',
           'class' => array('element-invisible'),
         ),
       )); ?>
     </nav>
   <?php endif; ?>

   <?php print render($page['header']); ?>
	</div>
 </header>

<?php print render($page['slideshow']); ?>
<div id="page-wrapper">
	<div id="page" class="container_12">

 
<?php print render($page['highlighted']); ?>
  <div id="main">
	

    <div id="content" class="column" role="main">
      
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (arg(0) == 'user' && !user_is_logged_in()) {print render($tabs);} ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
	  <?php print render($page['left_content']); ?>
      <?php print render($page['content']); ?>
	  
      <?php print $feed_icons; ?>
    </div>

   

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>


</div> <!-- End #page -->
 </div><!-- End #page-wrapper -->
<div id="footer-wrapper">
  <?php print render($page['footer']); ?>
</div>
<?php print render($page['bottom']); ?>
</div>
