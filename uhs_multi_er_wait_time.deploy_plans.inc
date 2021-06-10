<?php

/**
 * @file
 * uhs_multi_er_wait_time.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function uhs_multi_er_wait_time_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'push_to_dev_server';
  $plan->title = 'Push to dev server';
  $plan->description = '';
  $plan->debug = 1;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 0;
  $plan->processor_plugin = 'DeployProcessorMemory';
  $plan->processor_config = array();
  $plan->endpoints = array(
    'second_local' => 'second_local',
    'dev_server' => 0,
    'deploy_example_endpoint' => 0,
  );
  $plan->dependency_plugin = 'deploy_iterator';
  $export['push_to_dev_server'] = $plan;

  return $export;
}
