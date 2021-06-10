<?php

/**
 * @file
 * uhs_multi_er_wait_time.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function uhs_multi_er_wait_time_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'intro_facility_search';
  $content->admin_title = 'Intro Copy for Facility Search';
  $content->admin_description = '';
  $content->category = 'facility';
  $content->settings = array(
    'admin_title' => 'Intro Copy for Facility Search',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>intro copy for facility search</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['intro_facility_search'] = $content;

  return $export;
}
