<?php

/**
 * @file
 * uhs_multi_er_wait_time.deploy_endpoints.inc
 */

/**
 * Implements hook_deploy_endpoints_default().
 */
function uhs_multi_er_wait_time_deploy_endpoints_default() {
  $export = array();

  $endpoint = new DeployEndpoint();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 1;
  $endpoint->name = 'dev_server';
  $endpoint->title = 'Dev Server';
  $endpoint->description = '';
  $endpoint->debug = 0;
  $endpoint->authenticator_plugin = 'DeployAuthenticatorSession';
  $endpoint->authenticator_config = array(
    'username' => 'delphicadmin',
    'password' => 'mQHrD2MCLUiFlOpx!',
  );
  $endpoint->service_plugin = 'DeployServiceRestJSON';
  $endpoint->service_config = array(
    'url' => 'https://staging.gwhospital.com/services/rest',
    'timeout' => '30',
  );
  $export['dev_server'] = $endpoint;

  return $export;
}
