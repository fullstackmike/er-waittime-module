<?php

/**
 * @file
 * uhs_multi_er_wait_time.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uhs_multi_er_wait_time_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "deploy" && $api == "deploy_endpoints") {
    return array("version" => "1");
  }
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uhs_multi_er_wait_time_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uhs_multi_er_wait_time_node_info() {
  $items = array(
    'facility' => array(
      'name' => t('Facility'),
      'base' => 'node_content',
      'description' => t('An individual location.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function uhs_multi_er_wait_time_paragraphs_info() {
  $items = array(
    'directions' => array(
      'name' => 'Directions',
      'bundle' => 'directions',
      'locked' => '1',
    ),
    'er_reserve' => array(
      'name' => 'ER Reserve',
      'bundle' => 'er_reserve',
      'locked' => '1',
    ),
    'er_wait_time' => array(
      'name' => 'ER Wait Time',
      'bundle' => 'er_wait_time',
      'locked' => '1',
    ),
    'link_card' => array(
      'name' => 'Link Card',
      'bundle' => 'link_card',
      'locked' => '1',
    ),
  );
  return $items;
}
