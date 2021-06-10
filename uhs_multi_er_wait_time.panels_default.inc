<?php

/**
 * @file
 * uhs_multi_er_wait_time.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function uhs_multi_er_wait_time_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'faculty_search';
  $mini->category = '';
  $mini->admin_title = 'Facility Search';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '76ce492a-078a-4d1b-83af-25991564804f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'faculty_search';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-774fb304-bc7e-4a59-8824-ae2082bbf46e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'uhs_multi_er_wait_time-multi-er-wt-search-tab';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '774fb304-bc7e-4a59-8824-ae2082bbf46e';
  $display->content['new-774fb304-bc7e-4a59-8824-ae2082bbf46e'] = $pane;
  $display->panels['middle'][0] = 'new-774fb304-bc7e-4a59-8824-ae2082bbf46e';
  $pane = new stdClass();
  $pane->pid = 'new-31283f94-93c2-4dcc-9bdb-fe92958c9943';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'facilities-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'list',
    'css_class' => 'tab-widget__panel active',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '31283f94-93c2-4dcc-9bdb-fe92958c9943';
  $display->content['new-31283f94-93c2-4dcc-9bdb-fe92958c9943'] = $pane;
  $display->panels['middle'][1] = 'new-31283f94-93c2-4dcc-9bdb-fe92958c9943';
  $pane = new stdClass();
  $pane->pid = 'new-8788bf1c-7289-47ad-a660-8962dcf8ae70';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'facilities-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'map',
    'css_class' => 'tab-widget__panel inactive',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8788bf1c-7289-47ad-a660-8962dcf8ae70';
  $display->content['new-8788bf1c-7289-47ad-a660-8962dcf8ae70'] = $pane;
  $display->panels['middle'][2] = 'new-8788bf1c-7289-47ad-a660-8962dcf8ae70';
  $pane = new stdClass();
  $pane->pid = 'new-02445f81-5ba0-4846-b64f-5df925478842';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'uhs_multi_er_wait_time-multi-er-wt-map-legend';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'map_legend',
    'css_class' => 'tab-widget__panel inactive',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '02445f81-5ba0-4846-b64f-5df925478842';
  $display->content['new-02445f81-5ba0-4846-b64f-5df925478842'] = $pane;
  $display->panels['middle'][3] = 'new-02445f81-5ba0-4846-b64f-5df925478842';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['faculty_search'] = $mini;

  return $export;
}
