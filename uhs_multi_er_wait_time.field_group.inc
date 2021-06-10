<?php

/**
 * @file
 * uhs_multi_er_wait_time.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uhs_multi_er_wait_time_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_rules|paragraphs_item|directions|form';
  $field_group->group_name = 'group_display_rules';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'directions';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display Rules',
    'weight' => '1',
    'children' => array(
      0 => 'field_display_rule',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display Rules',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-display-rules field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_display_rules|paragraphs_item|directions|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_rules|paragraphs_item|link_card|form';
  $field_group->group_name = 'group_display_rules';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'link_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display Rules',
    'weight' => '2',
    'children' => array(
      0 => 'field_display_rule',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display Rules',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-display-rules field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_display_rules|paragraphs_item|link_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_facility_actions|node|facility|form';
  $field_group->group_name = 'group_facility_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'facility';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Facility Actions',
    'weight' => '6',
    'children' => array(
      0 => 'field_ctas',
      1 => 'field_helpful_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-facility-actions field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_facility_actions|node|facility|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|facility|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'facility';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-location field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_location|node|facility|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widget_display_wrapper|node|facility|default';
  $field_group->group_name = 'group_widget_display_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'facility';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Widget Display Wrapper',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-widget-display-wrapper field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_widget_display_wrapper|node|facility|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widget_display_wrapper|node|facility|waittime_widget';
  $field_group->group_name = 'group_widget_display_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'facility';
  $field_group->mode = 'waittime_widget';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Widget Display Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_ctas',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Widget Display Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'er-time-flyout__facility',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_widget_display_wrapper|node|facility|waittime_widget'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display Rules');
  t('Facility Actions');
  t('Location');
  t('Widget Display Wrapper');

  return $field_groups;
}
