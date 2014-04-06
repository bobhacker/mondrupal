<?php
/**
 * @file
 * md_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function md_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function md_model_node_info() {
  $items = array(
    'video_porno' => array(
      'name' => t('Vidéo porno'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
