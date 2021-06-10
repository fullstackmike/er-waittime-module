<?php

/**
 * @file
 * uhs_multi_er_wait_time.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uhs_multi_er_wait_time_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-facility-body'.
  $field_instances['node-facility-body'] = array(
    'bundle' => 'facility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bubble_label' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'map' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'wait_time_admin' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'waittime_widget' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Details',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'script' => 'script',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'script' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'display_summary' => 1,
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-facility-field_address'.
  $field_instances['node-facility-field_address'] = array(
    'bundle' => 'facility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bubble_label' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 1,
      ),
      'map' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_multiple',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 2,
      ),
      'wait_time_admin' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'waittime_widget' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-facility-field_ctas'.
  $field_instances['node-facility-field_ctas'] = array(
    'bundle' => 'facility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These call to actions are displayed as buttons when displaying the Facility',
    'display' => array(
      'bubble_label' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'cta_node',
        'weight' => 3,
      ),
      'map' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'cta_node',
        'weight' => 4,
      ),
      'wait_time_admin' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'waittime_widget' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'cta_sticky_widget',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_ctas',
    'label' => 'CTAs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'baldwin_spotlight_card' => -1,
        'call_out_card' => -1,
        'content_card' => -1,
        'directions' => 'directions',
        'er_reserve' => -1,
        'er_wait_time' => -1,
        'full_width_content_card' => -1,
        'hero_banner' => -1,
        'homepage_stats_card' => -1,
        'link_card' => 'link_card',
        'services_link_card' => -1,
        'three_ctas_card' => -1,
        'tools_ribbon' => -1,
      ),
      'bundle_weights' => array(
        'baldwin_spotlight_card' => 2,
        'call_out_card' => 3,
        'content_card' => 4,
        'directions' => 15,
        'er_reserve' => 16,
        'er_wait_time' => 17,
        'full_width_content_card' => 5,
        'hero_banner' => 6,
        'homepage_stats_card' => 7,
        'link_card' => 21,
        'services_link_card' => 8,
        'three_ctas_card' => 9,
        'tools_ribbon' => 10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Call to Action',
      'title_multiple' => 'CTAs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-facility-field_er_subtitle'.
  $field_instances['node-facility-field_er_subtitle'] = array(
    'bundle' => 'facility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'map' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wait_time_admin' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'waittime_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_er_subtitle',
    'label' => 'ER Subtitle',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'script' => 'script',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'script' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-facility-field_er_wait_time'.
  $field_instances['node-facility-field_er_wait_time'] = array(
    'bundle' => 'facility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bubble_label' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'bubble_label',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'waittime_detail',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'map' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'waittime_detail',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'waittime_detail_display',
        'weight' => 3,
      ),
      'wait_time_admin' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'wait_time_admin_paragraphs',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'waittime_widget' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'waittime_teaser_display',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_er_wait_time',
    'label' => 'ER Wait Time',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'baldwin_spotlight_card' => -1,
        'call_out_card' => -1,
        'content_card' => -1,
        'directions' => -1,
        'er_reserve' => -1,
        'er_wait_time' => 'er_wait_time',
        'full_width_content_card' => -1,
        'hero_banner' => -1,
        'homepage_stats_card' => -1,
        'link_card' => -1,
        'services_link_card' => -1,
        'three_ctas_card' => -1,
        'tools_ribbon' => -1,
      ),
      'bundle_weights' => array(
        'baldwin_spotlight_card' => 2,
        'call_out_card' => 3,
        'content_card' => 4,
        'directions' => 5,
        'er_reserve' => 6,
        'er_wait_time' => 7,
        'full_width_content_card' => 8,
        'hero_banner' => 9,
        'homepage_stats_card' => 10,
        'link_card' => 11,
        'services_link_card' => 12,
        'three_ctas_card' => 13,
        'tools_ribbon' => 14,
      ),
      'default_edit_mode' => 'open',
      'title' => 'ER Wait Time',
      'title_multiple' => 'ER Wait Times',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-facility-field_helpful_links'.
  $field_instances['node-facility-field_helpful_links'] = array(
    'bundle' => 'facility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Displayed on the Facility detail page, these are additional links that can be helpful.',
    'display' => array(
      'bubble_label' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'map' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'wait_time_admin' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'waittime_widget' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_helpful_links',
    'label' => 'Helpful Links',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'baldwin_spotlight_card' => -1,
        'call_out_card' => -1,
        'content_card' => -1,
        'directions' => -1,
        'er_reserve' => -1,
        'er_wait_time' => -1,
        'full_width_content_card' => -1,
        'hero_banner' => -1,
        'homepage_stats_card' => -1,
        'link_card' => 'link_card',
        'services_link_card' => -1,
        'three_ctas_card' => -1,
        'tools_ribbon' => -1,
      ),
      'bundle_weights' => array(
        'baldwin_spotlight_card' => 2,
        'call_out_card' => 3,
        'content_card' => 4,
        'directions' => 15,
        'er_reserve' => 16,
        'er_wait_time' => 17,
        'full_width_content_card' => 5,
        'hero_banner' => 6,
        'homepage_stats_card' => 7,
        'link_card' => 21,
        'services_link_card' => 8,
        'three_ctas_card' => 9,
        'tools_ribbon' => 10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Helpful Link',
      'title_multiple' => 'Helpful Links',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-directions-field_display_rule'.
  $field_instances['paragraphs_item-directions-field_display_rule'] = array(
    'bundle' => 'directions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_display_rule',
    'label' => 'Display Rule',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-directions-field_use_facility_address_field'.
  $field_instances['paragraphs_item-directions-field_use_facility_address_field'] = array(
    'bundle' => 'directions',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Currently, this is the only option.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'directions',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_use_facility_address_field',
    'label' => 'Use Facility Address Field',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-er_reserve-field_doc_asap_code'.
  $field_instances['paragraphs_item-er_reserve-field_doc_asap_code'] = array(
    'bundle' => 'er_reserve',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'doc_asap_display',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_doc_asap_code',
    'label' => 'Doc ASAP Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'script' => 'script',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'script' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-er_wait_time-field_hospital_code'.
  $field_instances['paragraphs_item-er_wait_time-field_hospital_code'] = array(
    'bundle' => 'er_wait_time',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bubble_label' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wait_time_admin_paragraphs' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'wait_time_marker' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'waittime_detail' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_hospital_code',
    'label' => 'Hospital Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'script' => 'script',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'script' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-er_wait_time-field_wait_time_value'.
  $field_instances['paragraphs_item-er_wait_time-field_wait_time_value'] = array(
    'bundle' => 'er_wait_time',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bubble_label' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'er_wait_time',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'waittime_detail_display',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'wait_time_admin_paragraphs' => array(
        'label' => 'inline',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'waittime_admin',
        'weight' => 1,
      ),
      'wait_time_marker' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'waittime_marker',
        'weight' => 0,
      ),
      'waittime_detail' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'waittime_detail_display',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_wait_time_value',
    'label' => 'Wait Time Value',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_card-field_blurb'.
  $field_instances['paragraphs_item-link_card-field_blurb'] = array(
    'bundle' => 'link_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_blurb',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'script' => 'script',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'script' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_card-field_display_rule'.
  $field_instances['paragraphs_item-link_card-field_display_rule'] = array(
    'bundle' => 'link_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_display_rule',
    'label' => 'Display Rule',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_card-field_link'.
  $field_instances['paragraphs_item-link_card-field_link'] = array(
    'bundle' => 'link_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uhs_multi_er_wait_time',
        'settings' => array(),
        'type' => 'er_cta_link',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('CTAs');
  t('Currently, this is the only option.');
  t('Description');
  t('Details');
  t('Display Rule');
  t('Displayed on the Facility detail page, these are additional links that can be helpful.');
  t('Doc ASAP Code');
  t('ER Subtitle');
  t('ER Wait Time');
  t('Helpful Links');
  t('Hospital Code');
  t('Link');
  t('These call to actions are displayed as buttons when displaying the Facility');
  t('Use Facility Address Field');
  t('Wait Time Value');

  return $field_instances;
}
