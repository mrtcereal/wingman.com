<?php
/**
 * @file   twocol-63-37-stacked.tpl.php
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Tue Dec 18 9:15:00 2012
 *
 * @brief  Template for the 63/37 panels layout.
 *
 *
 */

// Plugin definition.
$plugin = array(
  'title' => t('Two column 63/37 stacked with rows'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_63_37_rows.png',
  'theme' => 'twocol_63_37_rows',
  'css' => 'twocol_63_37_rows.css',
  'regions' => array(
    'header' => t('header'),
    'top-left' => t('top left'),
    'top-right' => t('top right'),
    'middle' => t('middle'),
	'bottom-left' => t('bottom left'),
    'bottom-right' => t('bottom right'),
    'footer' => t('footer'),
  ),
);
