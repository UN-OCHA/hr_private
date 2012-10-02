<?php
/**
 * @file
 * hr_private.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_private_user_default_permissions() {
  $permissions = array();

  // Exported permission: access private content.
  $permissions['access private content'] = array(
    'name' => 'access private content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
      3 => 'trusted',
    ),
    'module' => 'private',
  );

  // Exported permission: edit private content.
  $permissions['edit private content'] = array(
    'name' => 'edit private content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'private',
  );

  // Exported permission: mark content as private.
  $permissions['mark content as private'] = array(
    'name' => 'mark content as private',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'private',
  );

  return $permissions;
}
