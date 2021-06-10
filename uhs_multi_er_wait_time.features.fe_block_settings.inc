<?php

/**
 * @file
 * uhs_multi_er_wait_time.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function uhs_multi_er_wait_time_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['uhs_multi_er_wait_time-multi-er-wt-search-intro-copy'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'multi-er-wt-search-intro-copy',
    'module' => 'uhs_multi_er_wait_time',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uhs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uhs',
        'weight' => 0,
      ),
      'uhs_optimal' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'uhs_optimal',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['uhs_multi_er_wait_time-multi-er-wt-search-tab'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'multi-er-wt-search-tab',
    'module' => 'uhs_multi_er_wait_time',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uhs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uhs',
        'weight' => 0,
      ),
      'uhs_optimal' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'uhs_optimal',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-facilities-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'facilities-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uhs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uhs',
        'weight' => 0,
      ),
      'uhs_optimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uhs_optimal',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
