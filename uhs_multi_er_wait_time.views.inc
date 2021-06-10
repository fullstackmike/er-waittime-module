<?php

/**
* @file
* Views definitions for 'example'
*/

/**
* Implementation of hook_views_handlers() to register all of the basic handlers
* views uses.
*/
function uhs_multi_er_wait_time_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'uhs_multi_er_wait_time'),
    ),
    'handlers' => array(
      // The name of my handler
      'uhs_multi_er_wait_time_handler_widget_CTA_field' => array(
        // The name of the handler we are extending.
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

/**
* Implements hook_views_data().
*/
function uhs_multi_er_wait_time_views_data() {
  $data = array();
  // Add Example group
  $data['uhs_multi_er_wait_time']['table']['group'] = t('Multi ER Wait Time');
  $data['uhs_multi_er_wait_time']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );
  // Add custom field
  $data['uhs_multi_er_wait_time']['widget_CTA_field'] = array(
    'title' => t('Widget CTA Field'),
    'help' => t('Provides a CTA field.'),
    'field' => array(
      'handler' => 'uhs_multi_er_wait_time_handler_widget_CTA_field',
    ),
  );
  return $data;
}