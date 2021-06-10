<?php

/**
 * @file
 * uhs_multi_er_wait_time.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uhs_multi_er_wait_time_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'facilities_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Facilities Landing Page';
  $page->admin_description = '';
  $page->path = 'our-facilities';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Facility Search',
    'name' => 'main-menu',
    'weight' => '-99',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_facilities_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'facilities_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'facility_search',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
    'center' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '%token:waittime:facility-search-title';
  $display->uuid = 'abd319c4-a2d6-43d9-a046-ef682da6a5e0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_facilities_landing_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-053599d0-cc77-41a3-b040-a33fdd54e6f3';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'uhs_multi_er_wait_time-multi-er-wt-search-intro-copy';
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
  $pane->uuid = '053599d0-cc77-41a3-b040-a33fdd54e6f3';
  $display->content['new-053599d0-cc77-41a3-b040-a33fdd54e6f3'] = $pane;
  $display->panels['center'][0] = 'new-053599d0-cc77-41a3-b040-a33fdd54e6f3';
  $pane = new stdClass();
  $pane->pid = 'new-774ce0a2-0dfe-41c3-b2bd-96e18d36c274';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-facilities-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '774ce0a2-0dfe-41c3-b2bd-96e18d36c274';
  $display->content['new-774ce0a2-0dfe-41c3-b2bd-96e18d36c274'] = $pane;
  $display->panels['center'][1] = 'new-774ce0a2-0dfe-41c3-b2bd-96e18d36c274';
  $pane = new stdClass();
  $pane->pid = 'new-465ce307-4ade-4492-94f1-880645d7afad';
  $pane->panel = 'center';
  $pane->type = 'panels_mini';
  $pane->subtype = 'faculty_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'tab-widget__container',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '465ce307-4ade-4492-94f1-880645d7afad';
  $display->content['new-465ce307-4ade-4492-94f1-880645d7afad'] = $pane;
  $display->panels['center'][2] = 'new-465ce307-4ade-4492-94f1-880645d7afad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['facilities_landing_page'] = $page;

  return $pages;

}
