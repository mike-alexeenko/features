<?php
/**
 * @file
 * basic_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function basic_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: site editor.
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => 4,
  );

  // Exported role: site visitor.
  $roles['site visitor'] = array(
    'name' => 'site visitor',
    'weight' => 3,
  );

  return $roles;
}
