<?php
/**
 * @file
 * lager_and_ale_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function lager_and_ale__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lager_and_ale__node_info() {
  $items = array(
    'beer' => array(
      'name' => t('Beer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
