<?php
/**
 * @file
 * md_model.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function md_model_taxonomy_default_vocabularies() {
  return array(
    'acteur' => array(
      'name' => 'Acteur',
      'machine_name' => 'acteur',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'categorie' => array(
      'name' => 'Catégorie',
      'machine_name' => 'categorie',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
