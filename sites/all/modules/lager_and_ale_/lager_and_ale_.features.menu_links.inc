<?php
/**
 * @file
 * lager_and_ale_.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lager_and_ale__menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ales:ales
  $menu_links['main-menu_ales:ales'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ales',
    'router_path' => 'ales',
    'link_title' => 'Ales',
    'options' => array(
      'identifier' => 'main-menu_ales:ales',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_lagers:lagers
  $menu_links['main-menu_lagers:lagers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'lagers',
    'router_path' => 'lagers',
    'link_title' => 'Lagers',
    'options' => array(
      'identifier' => 'main-menu_lagers:lagers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ales');
  t('Lagers');


  return $menu_links;
}
