<?php
/**
 * @file
 * select_or_other_issue_2565883.features.inc
 */

/**
 * Implements hook_node_info().
 */
function select_or_other_issue_2565883_node_info() {
  $items = array(
    'temp' => array(
      'name' => t('Temp'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
