<?php

/**
 * @file
 * uhs_multi_er_wait_time.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uhs_multi_er_wait_time_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'facilities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Facilities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Facilities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: ER Wait Time (field_er_wait_time) */
  $handler->display->display_options['relationships']['field_er_wait_time_value']['id'] = 'field_er_wait_time_value';
  $handler->display->display_options['relationships']['field_er_wait_time_value']['table'] = 'field_data_field_er_wait_time';
  $handler->display->display_options['relationships']['field_er_wait_time_value']['field'] = 'field_er_wait_time_value';
  $handler->display->display_options['relationships']['field_er_wait_time_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Content: ER Wait Time */
  $handler->display->display_options['fields']['field_er_wait_time']['id'] = 'field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time']['table'] = 'field_data_field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time']['field'] = 'field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time']['label'] = '';
  $handler->display->display_options['fields']['field_er_wait_time']['element_type'] = '0';
  $handler->display->display_options['fields']['field_er_wait_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_er_wait_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_er_wait_time']['settings'] = array(
    'view_mode' => 'bubble_label',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: Content: CTAs */
  $handler->display->display_options['fields']['field_ctas']['id'] = 'field_ctas';
  $handler->display->display_options['fields']['field_ctas']['table'] = 'field_data_field_ctas';
  $handler->display->display_options['fields']['field_ctas']['field'] = 'field_ctas';
  $handler->display->display_options['fields']['field_ctas']['type'] = 'cta_node_map';
  $handler->display->display_options['fields']['field_ctas']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_ctas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ctas']['separator'] = '';
  $handler->display->display_options['fields']['field_ctas']['field_api_classes'] = TRUE;
  /* Field: Bubble Marker */
  $handler->display->display_options['fields']['field_er_wait_time_1']['id'] = 'field_er_wait_time_1';
  $handler->display->display_options['fields']['field_er_wait_time_1']['table'] = 'field_data_field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time_1']['field'] = 'field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time_1']['ui_name'] = 'Bubble Marker';
  $handler->display->display_options['fields']['field_er_wait_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_er_wait_time_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_er_wait_time_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_er_wait_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_er_wait_time_1']['empty'] = 'No Wait Time';
  $handler->display->display_options['fields']['field_er_wait_time_1']['settings'] = array(
    'view_mode' => 'wait_time_marker',
  );
  /* Field: Content: ER Wait Time */
  $handler->display->display_options['fields']['field_er_wait_time_2']['id'] = 'field_er_wait_time_2';
  $handler->display->display_options['fields']['field_er_wait_time_2']['table'] = 'field_data_field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time_2']['field'] = 'field_er_wait_time';
  $handler->display->display_options['fields']['field_er_wait_time_2']['label'] = '';
  $handler->display->display_options['fields']['field_er_wait_time_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_er_wait_time_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_er_wait_time_2']['settings'] = array(
    'view_mode' => 'waittime_detail',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'facility' => 'facility',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '100',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'facilities';

  /* Display: Multi WaitTime Sticky Widget */
  $handler = $view->new_display('block', 'Multi WaitTime Sticky Widget', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Display a sticky widget on the page that will display all active wait times.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'er-time-flyout__item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'er-time-flyout__list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'waittime_widget';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Paragraphs item: Wait Time Value (field_wait_time_value) */
  $handler->display->display_options['arguments']['field_wait_time_value_value']['id'] = 'field_wait_time_value_value';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['table'] = 'field_data_field_wait_time_value';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['field'] = 'field_wait_time_value_value';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['relationship'] = 'field_er_wait_time_value';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['default_argument_type'] = 'variable';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['default_argument_options']['variable'] = 'multi_er_hide_threshold';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_wait_time_value_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'facility' => 'facility',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '100',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  /* Filter criterion: Paragraphs item: Wait Time Value (field_wait_time_value) */
  $handler->display->display_options['filters']['field_wait_time_value_value']['id'] = 'field_wait_time_value_value';
  $handler->display->display_options['filters']['field_wait_time_value_value']['table'] = 'field_data_field_wait_time_value';
  $handler->display->display_options['filters']['field_wait_time_value_value']['field'] = 'field_wait_time_value_value';
  $handler->display->display_options['filters']['field_wait_time_value_value']['relationship'] = 'field_er_wait_time_value';
  $handler->display->display_options['filters']['field_wait_time_value_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_wait_time_value_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_wait_time_value_value']['group'] = 1;

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmapextended';
  $handler->display->display_options['style_options']['fallback_values'] = array(
    'text' => '',
    'rmt' => '',
    'iwq' => '',
    'iwo' => '',
    'link' => '',
    'latitude' => '',
    'longitude' => '',
    'title' => '',
    'markername' => '',
    'offset' => '',
  );
  $handler->display->display_options['style_options']['field_purposes'] = array(
    'title' => 'text',
    'longitude' => 'longitude',
    'latitude' => 'latitude',
    'field_er_wait_time' => 'title',
    'field_address' => '',
    'field_ctas' => '',
    'field_er_wait_time_1' => 'markername',
    'field_er_wait_time_2' => '',
  );
  $handler->display->display_options['style_options']['macro'] = '[gmap |behavior=+autozoom |width=100%|height=400px]';
  $handler->display->display_options['style_options']['datasource'] = 'fields';
  $handler->display->display_options['style_options']['markers'] = 'field';
  $handler->display->display_options['style_options']['markertype'] = 'gwhospital';
  $handler->display->display_options['style_options']['center_on_proximityfilter'] = 1;
  $handler->display->display_options['style_options']['center_on_proximityfilter_rel'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'facility' => 'facility',
  );
  /* Filter criterion: Content: ER Wait Time (field_er_wait_time) */
  $handler->display->display_options['filters']['field_er_wait_time_value']['id'] = 'field_er_wait_time_value';
  $handler->display->display_options['filters']['field_er_wait_time_value']['table'] = 'field_data_field_er_wait_time';
  $handler->display->display_options['filters']['field_er_wait_time_value']['field'] = 'field_er_wait_time_value';
  $handler->display->display_options['filters']['field_er_wait_time_value']['operator'] = 'not empty';
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '25',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['path'] = 'map';

  /* Display: Multi Facility Map */
  $handler = $view->new_display('panel_pane', 'Multi Facility Map', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmapextended';
  $handler->display->display_options['style_options']['fallback_values'] = array(
    'text' => '',
    'rmt' => '',
    'iwq' => '',
    'iwo' => '',
    'link' => '',
    'latitude' => '',
    'longitude' => '',
    'title' => '',
    'markername' => '',
    'offset' => '',
  );
  $handler->display->display_options['style_options']['field_purposes'] = array(
    'field_er_wait_time_2' => 'text',
    'title' => 'text',
    'longitude' => 'longitude',
    'latitude' => 'latitude',
    'field_er_wait_time' => 'title',
    'field_address' => 'text',
    'field_ctas' => 'text',
    'field_er_wait_time_1' => 'markername',
  );
  $handler->display->display_options['style_options']['macro'] = '[gmap |behavior=+autozoom |width=100%|height=400px]';
  $handler->display->display_options['style_options']['datasource'] = 'fields';
  $handler->display->display_options['style_options']['clickmode'] = 'text';
  $handler->display->display_options['style_options']['markers'] = 'field';
  $handler->display->display_options['style_options']['markertype'] = 'highlight';
  $handler->display->display_options['style_options']['center_on_proximityfilter'] = 1;
  $handler->display->display_options['style_options']['center_on_proximityfilter_rel'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Pane Listing */
  $handler = $view->new_display('panel_pane', 'Pane Listing', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Admin Listing */
  $handler = $view->new_display('block', 'Admin Listing', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Facilities Wait Time Admin Display';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'wait_time_admin';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'facility' => 'facility',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['facilities'] = $view;

  return $export;
}
