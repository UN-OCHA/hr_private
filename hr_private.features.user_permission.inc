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

  // Exported permission: 'access private content'.
  $permissions['access private content'] = array(
    'name' => 'access private content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'trusted' => 'trusted',
    ),
    'module' => 'private',
  );

  // Exported permission: 'edit private content'.
  $permissions['edit private content'] = array(
    'name' => 'edit private content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'trusted' => 'trusted',
    ),
    'module' => 'private',
  );

  // Exported permission: 'mark content as private'.
  $permissions['mark content as private'] = array(
    'name' => 'mark content as private',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'trusted' => 'trusted',
    ),
    'module' => 'private',
  );

  return $permissions;
}
