<?php
/**
 * @file
 * midcamp_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function midcamp_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_2015-midcamp:http://2015.midcamp.org.
  $menu_links['main-menu_2015-midcamp:http://2015.midcamp.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://2015.midcamp.org',
    'router_path' => '',
    'link_title' => '2015 MidCamp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_2015-midcamp:http://2015.midcamp.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-in:user/login.
  $menu_links['user-menu_log-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'identifier' => 'user-menu_log-in:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2015 MidCamp');
  t('Log in');

  return $menu_links;
}
