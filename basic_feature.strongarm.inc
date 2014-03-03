<?php
/**
 * @file
 * basic_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_search_version';
  $strongarm->value = '7.x-2.13';
  $export['acquia_search_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_def_timestamp';
  $strongarm->value = '1374783288';
  $export['acquia_spi_def_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_def_vars';
  $strongarm->value = array(
    'maintenance_mode' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_admin_priv' => array(
      'optional' => '0',
      'description' => '',
    ),
    'error_level' => array(
      'optional' => '0',
      'description' => '',
    ),
    'block_cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_send_node_user' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_email_verification' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_cancel_method' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_signatures' => array(
      'optional' => '0',
      'description' => '',
    ),
    'filter_fallback_format' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_admin_role' => array(
      'optional' => '0',
      'description' => '',
    ),
    'dblog_row_limit' => array(
      'optional' => '0',
      'description' => '',
    ),
    'file_default_scheme' => array(
      'optional' => '0',
      'description' => '',
    ),
    'install_profile' => array(
      'optional' => '0',
      'description' => '',
    ),
    'update_last_check' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_default_country' => array(
      'optional' => '0',
      'description' => '',
    ),
    'date_default_timezone' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_register' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_name' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_offline' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_send_watchdog' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_use_cron' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_backends' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_default_class' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_inc' => array(
      'optional' => '0',
      'description' => '',
    ),
    'googleanalytics_cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'preprocess_js' => array(
      'optional' => '0',
      'description' => '',
    ),
    'page_cache_maximum_age' => array(
      'optional' => '0',
      'description' => '',
    ),
    'preprocess_css' => array(
      'optional' => '0',
      'description' => '',
    ),
    'page_compression' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_lifetime' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cron_last' => array(
      'optional' => '0',
      'description' => '',
    ),
    'clean_url' => array(
      'optional' => '0',
      'description' => '',
    ),
    'redirect_global_clean' => array(
      'optional' => '0',
      'description' => '',
    ),
    'theme_zen_settings' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_module_diff_data' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cron_safe_threshold' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_def_timestamp' => array(
      'optional' => '0',
      'description' => '',
    ),
    'image_allow_insecure_derivatives' => array(
      'optional' => '0',
      'description' => '',
    ),
  );
  $export['acquia_spi_def_vars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_article';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_city_guide';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_company';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_event';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_faq';
  $strongarm->value = 'edit-scheduler';
  $export['additional_settings__active_tab_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_job_posting';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page';
  $strongarm->value = 'edit-scheduler';
  $export['additional_settings__active_tab_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.search' => TRUE,
    'admin_menu.users' => TRUE,
    'admin_menu.account' => TRUE,
    'shortcut.links' => TRUE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_devel_modules_skip';
  $strongarm->value = array(
    'admin_devel' => 0,
    'devel' => 0,
    'devel_node_access' => 0,
    'field_ui' => 0,
    'views_ui' => 0,
  );
  $export['admin_menu_devel_modules_skip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme_default';
  $strongarm->value = 'seven';
  $export['admin_theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced__active_tab';
  $strongarm->value = 'edit-plugins';
  $export['advanced__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'More like this',
      'num_results' => '5',
      'mlt_fl' => array(
        'label' => 'label',
        'taxonomy_names' => 'taxonomy_names',
      ),
      'mlt_env_id' => 'solr',
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '20',
      'mlt_type_filters' => array(),
      'mlt_custom_filters' => '',
      'delta' => 'mlt-001',
    ),
  );
  $export['apachesolr_search_mlt_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = 'avqgti';
  $export['apachesolr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_files';
  $strongarm->value = array(
    0 => 'public://color/bartik-4c130a1b/logo.png',
    1 => 'public://color/bartik-4c130a1b/colors.css',
  );
  $export['color_bartik_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_logo';
  $strongarm->value = 'public://color/bartik-4c130a1b/logo.png';
  $export['color_bartik_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_palette';
  $strongarm->value = array(
    'top' => '#cd2d2d',
    'bottom' => '#cf3535',
    'bg' => '#ffffff',
    'sidebar' => '#f1f4f0',
    'sidebarborders' => '#ededed',
    'footer' => '#1f1d1c',
    'titleslogan' => '#fffeff',
    'text' => '#3b3b3b',
    'link' => '#d6121f',
  );
  $export['color_bartik_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_stylesheets';
  $strongarm->value = array(
    0 => 'public://color/bartik-4c130a1b/colors.css',
  );
  $export['color_bartik_stylesheets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article';
  $strongarm->value = 0;
  $export['comment_anonymous_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_city_guide';
  $strongarm->value = 0;
  $export['comment_anonymous_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_company';
  $strongarm->value = 0;
  $export['comment_anonymous_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event';
  $strongarm->value = 0;
  $export['comment_anonymous_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_faq';
  $strongarm->value = 0;
  $export['comment_anonymous_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_job_posting';
  $strongarm->value = 0;
  $export['comment_anonymous_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_article';
  $strongarm->value = '2';
  $export['comment_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_city_guide';
  $strongarm->value = '2';
  $export['comment_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_company';
  $strongarm->value = '1';
  $export['comment_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_article';
  $strongarm->value = 1;
  $export['comment_default_mode_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_city_guide';
  $strongarm->value = 1;
  $export['comment_default_mode_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_company';
  $strongarm->value = 1;
  $export['comment_default_mode_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event';
  $strongarm->value = 1;
  $export['comment_default_mode_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_faq';
  $strongarm->value = 1;
  $export['comment_default_mode_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_job_posting';
  $strongarm->value = 1;
  $export['comment_default_mode_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_city_guide';
  $strongarm->value = '50';
  $export['comment_default_per_page_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_company';
  $strongarm->value = '50';
  $export['comment_default_per_page_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event';
  $strongarm->value = '50';
  $export['comment_default_per_page_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_faq';
  $strongarm->value = '50';
  $export['comment_default_per_page_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_job_posting';
  $strongarm->value = '50';
  $export['comment_default_per_page_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event';
  $strongarm->value = '2';
  $export['comment_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_faq';
  $strongarm->value = '2';
  $export['comment_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_article';
  $strongarm->value = 1;
  $export['comment_form_location_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_city_guide';
  $strongarm->value = 1;
  $export['comment_form_location_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_company';
  $strongarm->value = 1;
  $export['comment_form_location_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event';
  $strongarm->value = 1;
  $export['comment_form_location_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_faq';
  $strongarm->value = 1;
  $export['comment_form_location_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_job_posting';
  $strongarm->value = 1;
  $export['comment_form_location_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_job_posting';
  $strongarm->value = '1';
  $export['comment_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '0';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_article';
  $strongarm->value = '1';
  $export['comment_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_city_guide';
  $strongarm->value = '1';
  $export['comment_preview_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_company';
  $strongarm->value = '1';
  $export['comment_preview_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event';
  $strongarm->value = '1';
  $export['comment_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_faq';
  $strongarm->value = '1';
  $export['comment_preview_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_job_posting';
  $strongarm->value = '1';
  $export['comment_preview_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_article';
  $strongarm->value = 1;
  $export['comment_subject_field_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_city_guide';
  $strongarm->value = 1;
  $export['comment_subject_field_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_company';
  $strongarm->value = 1;
  $export['comment_subject_field_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event';
  $strongarm->value = 1;
  $export['comment_subject_field_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_faq';
  $strongarm->value = 1;
  $export['comment_subject_field_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_job_posting';
  $strongarm->value = 1;
  $export['comment_subject_field_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'configurable_timezones';
  $strongarm->value = 1;
  $export['configurable_timezones'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'oOwl5BmoLzOkxwv0MuCL9lhRtMCqt5U-mZn6fqCsgsQ';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1393834988;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'n1urk1';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_content_all_views';
  $strongarm->value = 1;
  $export['ctools_content_all_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1393835005;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_use_iso8601';
  $strongarm->value = 0;
  $export['date_api_use_iso8601'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'UTC';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '0';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '8';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = '0LuF4wScLaDicLpJuj8Hasmlaqg1yy8i9vkOUtg--Nc';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'empty_timezone_message';
  $strongarm->value = 0;
  $export['empty_timezone_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'country' => array(
      0 => 'countries_country',
      1 => 'cid',
    ),
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__city_guide';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__company';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__job_posting';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = '';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/test.localhost/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = 'c:\\windows\\temp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forum_nav_vocabulary';
  $strongarm->value = '2';
  $export['forum_nav_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'acquia';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1392648050;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = FALSE;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_admin_roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    4 => 0,
  );
  $export['masquerade_admin_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_quick_switches';
  $strongarm->value = array();
  $export['masquerade_quick_switches'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_test_user';
  $strongarm->value = '';
  $export['masquerade_test_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 250,
    3 => 247,
    4 => 246,
    5 => 245,
    6 => 126,
    7 => 125,
    8 => 124,
    9 => 123,
    10 => 122,
    11 => 121,
    12 => 117,
    13 => 63,
    14 => 62,
    15 => 61,
    16 => 60,
    17 => 59,
    18 => 58,
    19 => 56,
    20 => 45,
    21 => 44,
    22 => 31,
    23 => 30,
    24 => 29,
    25 => 28,
    26 => 27,
    27 => 24,
    28 => 22,
    29 => 21,
    30 => 15,
    31 => 14,
    32 => 13,
    33 => 11,
    34 => 10,
    35 => 7,
    36 => 6,
    37 => 5,
    38 => 3,
    39 => 2,
    40 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_city_guide';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_company';
  $strongarm->value = array();
  $export['menu_options_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array();
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_faq';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_job_posting';
  $strongarm->value = array();
  $export['menu_options_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_city_guide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_company';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_faq';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_job_posting';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'comment' => 1393407909,
    'views_ui' => 1393420457,
    'date_all_day' => 1393422023,
    'date_popup' => 1393422023,
    'date_repeat' => 1393422023,
    'date_repeat_field' => 1393422023,
    'date_tools' => 1393422052,
    'ds_devel' => 1393489679,
    'ds_extras' => 1393489679,
    'ds_format' => 1393489679,
    'ds_forms' => 1393489679,
    'ds_search' => 1393489679,
    'ds_ui' => 1393489679,
    'apachesolr_access' => 1393516260,
    'apachesolr' => 1393516276,
    'apachesolr_search' => 1393516260,
    'acquia_agent' => 1393515963,
    'acquia_search' => 1393515018,
    'acquia_spi' => 1393515079,
    'sassy_bootstrap' => 1393592338,
    'sassy_compass' => 1393592297,
    'sassy_foundation' => 1393592338,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_custom_css';
  $strongarm->value = '';
  $export['nice_menus_custom_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_1';
  $strongarm->value = '-1';
  $export['nice_menus_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_js';
  $strongarm->value = 1;
  $export['nice_menus_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['nice_menus_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_1';
  $strongarm->value = 'Main ';
  $export['nice_menus_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_number';
  $strongarm->value = '2';
  $export['nice_menus_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_respect_expand_1';
  $strongarm->value = '0';
  $export['nice_menus_respect_expand_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_sf_delay';
  $strongarm->value = '800';
  $export['nice_menus_sf_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_sf_speed';
  $strongarm->value = 'slow';
  $export['nice_menus_sf_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_1';
  $strongarm->value = 'left';
  $export['nice_menus_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1393834988';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_city_guide';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_company';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_faq';
  $strongarm->value = array();
  $export['node_options_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forum';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_posting';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '1';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_city_guide';
  $strongarm->value = '1';
  $export['node_preview_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_company';
  $strongarm->value = '1';
  $export['node_preview_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_faq';
  $strongarm->value = '1';
  $export['node_preview_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_job_posting';
  $strongarm->value = '1';
  $export['node_preview_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 1;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_city_guide';
  $strongarm->value = 1;
  $export['node_submitted_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_company';
  $strongarm->value = 0;
  $export['node_submitted_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_faq';
  $strongarm->value = 1;
  $export['node_submitted_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_job_posting';
  $strongarm->value = 1;
  $export['node_submitted_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_type_faq';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_type_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_faq_pattern';
  $strongarm->value = 'faq-page/[term:tid]';
  $export['pathauto_faq_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_city_guide_pattern';
  $strongarm->value = '';
  $export['pathauto_node_city_guide_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_company_pattern';
  $strongarm->value = 'company/[node:title]';
  $export['pathauto_node_company_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_pattern';
  $strongarm->value = '';
  $export['pathauto_node_faq_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_job_posting_pattern';
  $strongarm->value = '';
  $export['pathauto_node_job_posting_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_poll_pattern';
  $strongarm->value = '';
  $export['pathauto_node_poll_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_audience_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_audience_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_fruits_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_fruits_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_geographical_region_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_geographical_region_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_inhabitants_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_inhabitants_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'forum' => TRUE,
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prepro';
  $strongarm->value = array(
    'additional' => array(
      'sassy' => array(
        'errors' => 'watchdog',
        'style' => 'nested',
      ),
    ),
    'filetypes' => array(
      'sass' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/onload',
        'cache_path' => 'public://prepro',
      ),
      'scss' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/onload',
        'cache_path' => 'public://prepro',
      ),
    ),
    'show_warnings' => TRUE,
  );
  $export['prepro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_city_guide';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_city_guide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_company';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_company'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_event';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_job_posting';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_faq';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_page';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_faq';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_page';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_faq';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_page';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_faq';
  $strongarm->value = 0;
  $export['scheduler_publish_required_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_page';
  $strongarm->value = 0;
  $export['scheduler_publish_required_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_faq';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_page';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_faq';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_page';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_faq';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_page';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_faq';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_page';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_faq';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_page';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_faq';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_page';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    0 => 'node',
    1 => 'user',
    2 => 'apachesolr_search',
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'apachesolr_search';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'node/253';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'sitemap';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'GB';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'frontpage';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'mike.blink.alexeenko@gmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_categories_depth';
  $strongarm->value = 'all';
  $export['site_map_categories_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_css';
  $strongarm->value = 0;
  $export['site_map_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_forum_threshold';
  $strongarm->value = '-1';
  $export['site_map_forum_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_message';
  $strongarm->value = array(
    'value' => '',
    'format' => 'ckeditor',
  );
  $export['site_map_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_page_title';
  $strongarm->value = 'Site map';
  $export['site_map_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_depth';
  $strongarm->value = 'all';
  $export['site_map_rss_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_front';
  $strongarm->value = 'rss.xml';
  $export['site_map_rss_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_count';
  $strongarm->value = 1;
  $export['site_map_show_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_faq';
  $strongarm->value = 1;
  $export['site_map_show_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_front';
  $strongarm->value = 1;
  $export['site_map_show_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus';
  $strongarm->value = array(
    'devel' => 'devel',
    'features' => 'features',
    'main-menu' => 'main-menu',
    'management' => 'management',
    'navigation' => 'navigation',
    'menu-quick-links' => 'menu-quick-links',
    'user-menu' => 'user-menu',
  );
  $export['site_map_show_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_rss_links';
  $strongarm->value = '1';
  $export['site_map_show_rss_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_vocabularies';
  $strongarm->value = array(
    2 => '2',
    3 => '3',
    5 => '5',
    6 => '6',
    4 => '4',
    1 => '1',
  );
  $export['site_map_show_vocabularies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_term_threshold';
  $strongarm->value = '0';
  $export['site_map_term_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'site name';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'site slogan';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bartik_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => 'profiles/acquia/AcquiaDrupalLogo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'scheme' => 'firehouse',
    'palette' => array(
      'top' => '#cd2d2d',
      'bottom' => '#cf3535',
      'bg' => '#ffffff',
      'sidebar' => '#f1f4f0',
      'sidebarborders' => '#ededed',
      'footer' => '#1f1d1c',
      'titleslogan' => '#fffeff',
      'text' => '#3b3b3b',
      'link' => '#d6121f',
    ),
    'theme' => 'bartik',
    'info' => array(
      'fields' => array(
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'bg' => 'Main background',
        'sidebar' => 'Sidebar background',
        'sidebarborders' => 'Sidebar borders',
        'footer' => 'Footer background',
        'titleslogan' => 'Title and slogan',
        'text' => 'Text color',
        'link' => 'Link color',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Blue Lagoon (default)',
          'colors' => array(
            'top' => '#0779bf',
            'bottom' => '#48a9e4',
            'bg' => '#ffffff',
            'sidebar' => '#f6f6f2',
            'sidebarborders' => '#f9f9f9',
            'footer' => '#292929',
            'titleslogan' => '#fffeff',
            'text' => '#3b3b3b',
            'link' => '#0071B3',
          ),
        ),
        'firehouse' => array(
          'title' => 'Firehouse',
          'colors' => array(
            'top' => '#cd2d2d',
            'bottom' => '#cf3535',
            'bg' => '#ffffff',
            'sidebar' => '#f1f4f0',
            'sidebarborders' => '#ededed',
            'footer' => '#1f1d1c',
            'titleslogan' => '#fffeff',
            'text' => '#3b3b3b',
            'link' => '#d6121f',
          ),
        ),
        'ice' => array(
          'title' => 'Ice',
          'colors' => array(
            'top' => '#d0d0d0',
            'bottom' => '#c2c4c5',
            'bg' => '#ffffff',
            'sidebar' => '#ffffff',
            'sidebarborders' => '#cccccc',
            'footer' => '#24272c',
            'titleslogan' => '#000000',
            'text' => '#4a4a4a',
            'link' => '#019dbf',
          ),
        ),
        'plum' => array(
          'title' => 'Plum',
          'colors' => array(
            'top' => '#4c1c58',
            'bottom' => '#593662',
            'bg' => '#fffdf7',
            'sidebar' => '#edede7',
            'sidebarborders' => '#e7e7e7',
            'footer' => '#2c2c28',
            'titleslogan' => '#ffffff',
            'text' => '#301313',
            'link' => '#9d408d',
          ),
        ),
        'slate' => array(
          'title' => 'Slate',
          'colors' => array(
            'top' => '#4a4a4a',
            'bottom' => '#4e4e4e',
            'bg' => '#ffffff',
            'sidebar' => '#ffffff',
            'sidebarborders' => '#d0d0d0',
            'footer' => '#161617',
            'titleslogan' => '#ffffff',
            'text' => '#3b3b3b',
            'link' => '#0073b6',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'css/colors.css',
      ),
      'copy' => array(
        0 => 'logo.png',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(),
      'slices' => array(),
      'blend_target' => '#ffffff',
      'preview_css' => 'color/preview.css',
      'preview_js' => 'color/preview.js',
      'preview_html' => 'color/preview.html',
      'base_image' => 'color/base.png',
    ),
    'nice_menus_custom_css' => '',
  );
  $export['theme_bartik_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_custom_theme_files_directory';
  $strongarm->value = 'sites/all/themes/custom_theme/generated_files';
  $export['theme_custom_theme_files_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_custom_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/acquia/AcquiaDrupalLogo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three_col_grail',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => '25',
    'bigscreen_sidebar_second' => '25',
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => '77',
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '1140',
    'bigscreen_media_query' => 'only screen and (min-width:1125px)',
    'tablet_landscape_layout' => 'three_col_grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => '20',
    'tablet_landscape_sidebar_second' => '20',
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => '100',
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one_col_vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '50',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one_col_vert',
    'smartphone_landscape_sidebar_unit' => '%',
    'smartphone_landscape_sidebar_first' => '50',
    'smartphone_landscape_sidebar_second' => '50',
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_landscape_page_width' => '100',
    'smartphone_landscape_page_unit' => '%',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'smartphone_portrait_page_width' => '100',
    'smartphone_portrait_page_unit' => '%',
    'smartphone_portrait_sidebar_first' => '100',
    'smartphone_portrait_sidebar_second' => '100',
    'smartphone_portrait_sidebar_unit' => '%',
    'smartphone_portrait_layout' => 'one_col_stack',
    'bigscreen_two_brick' => 'two-brick',
    'bigscreen_two_66_33' => 'two-66-33',
    'bigscreen_two_50' => 'two-50',
    'bigscreen_two_33_66' => 'two-33-66',
    'bigscreen_three_50_25_25' => 'three-50-25-25',
    'bigscreen_three_3x33' => 'three-3x33',
    'bigscreen_three_25_50_25' => 'three-25-50-25',
    'bigscreen_three_25_25_50' => 'three-25-25-50',
    'bigscreen_four_4x25' => 'four-4x25',
    'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
    'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
    'bigscreen_three_inset_right' => 'three-inset-right',
    'bigscreen_three_inset_left' => 'three-inset-left',
    'tablet_landscape_two_brick' => 'two-brick',
    'tablet_landscape_two_66_33' => 'two-66-33',
    'tablet_landscape_two_50' => 'two-50',
    'tablet_landscape_two_33_66' => 'two-33-66',
    'tablet_landscape_three_50_25_25' => 'three-50-25-25',
    'tablet_landscape_three_3x33' => 'three-3x33',
    'tablet_landscape_three_25_50_25' => 'three-25-50-25',
    'tablet_landscape_three_25_25_50' => 'three-25-25-50',
    'tablet_landscape_four_4x25' => 'four-4x25',
    'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
    'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
    'tablet_landscape_three_inset_right' => 'three-inset-right',
    'tablet_landscape_three_inset_left' => 'three-inset-left',
    'tablet_portrait_two_brick' => 'two-brick',
    'tablet_portrait_two_66_33' => 'two-66-33',
    'tablet_portrait_two_50' => 'two-50',
    'tablet_portrait_two_33_66' => 'two-33-66',
    'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
    'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
    'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
    'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
    'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
    'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
    'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
    'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
    'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
    'smartphone_landscape_two_brick' => 'two-brick-stack',
    'smartphone_landscape_two_66_33' => 'two-66-33-stack',
    'smartphone_landscape_two_50' => 'two-50-stack',
    'smartphone_landscape_two_33_66' => 'two-33-66-stack',
    'smartphone_landscape_three_50_25_25' => 'three-50-25-25-stack',
    'smartphone_landscape_three_3x33' => 'three-3x33-stack',
    'smartphone_landscape_three_25_50_25' => 'three-25-50-25-stack',
    'smartphone_landscape_three_25_25_50' => 'three-25-25-50-stack',
    'smartphone_landscape_four_4x25' => 'four-4x25-stack',
    'smartphone_landscape_five_5x20' => 'five-5x20-stack',
    'smartphone_landscape_six_6x16' => 'six-6x16-stack',
    'smartphone_landscape_three_inset_right' => 'three-inset-right-stack',
    'smartphone_landscape_three_inset_left' => 'three-inset-left-stack',
    'enable_custom_media_queries' => 1,
    'global_default_layout_toggle' => 0,
    'global_default_layout' => 'smartphone-portrait',
    'global_files_path' => 'theme_directory',
    'custom_files_path' => '',
    'disable_responsive_styles' => 0,
    'load_html5js' => 1,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1',
    'adaptivetheme_meta_mobileoptimized' => 'width',
    'adaptivetheme_meta_handheldfriendly' => 'true',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
    'chrome_edge' => 0,
    'clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 0,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 1,
    'enable_font_settings' => 1,
    'enable_heading_settings' => 1,
    'enable_image_settings' => 1,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 1,
    'enable_float_region_blocks' => 1,
    'enable_markup_overides' => 1,
    'at-settings__active_tab' => 'edit-extend',
    'base_font_type' => '<none>',
    'base_font' => 'bf-sss',
    'base_font_gwf' => '',
    'base_font_gwf_add_styles' => 0,
    'base_font_gwf_add_styles_300' => 0,
    'base_font_gwf_add_styles_300italic' => 0,
    'base_font_gwf_add_styles_400' => 0,
    'base_font_gwf_add_styles_400italic' => 0,
    'base_font_gwf_add_styles_700' => 0,
    'base_font_gwf_add_styles_700italic' => 0,
    'base_font_gwf_add_charsets' => 0,
    'base_font_gwf_add_charsets_latin' => 0,
    'base_font_gwf_add_charsets_latin-ext' => 0,
    'base_font_gwf_add_charsets_greek' => 0,
    'base_font_gwf_add_charsets_greek-ext' => 0,
    'base_font_gwf_add_charsets_cyrillic' => 0,
    'base_font_gwf_add_charsets_cyrillic-ext' => 0,
    'base_font_gwf_add_charsets_khmer' => 0,
    'base_font_gwf_add_charsets_vietnamese' => 0,
    'base_font_cfs' => '',
    'base_font_size' => '<none>',
    'site_name_font_type' => '<none>',
    'site_name_font' => 'bf-sss',
    'site_name_font_gwf' => '',
    'site_name_font_gwf_add_styles' => 0,
    'site_name_font_gwf_add_styles_300' => 0,
    'site_name_font_gwf_add_styles_300italic' => 0,
    'site_name_font_gwf_add_styles_400' => 0,
    'site_name_font_gwf_add_styles_400italic' => 0,
    'site_name_font_gwf_add_styles_700' => 0,
    'site_name_font_gwf_add_styles_700italic' => 0,
    'site_name_font_gwf_add_charsets' => 0,
    'site_name_font_gwf_add_charsets_latin' => 0,
    'site_name_font_gwf_add_charsets_latin-ext' => 0,
    'site_name_font_gwf_add_charsets_greek' => 0,
    'site_name_font_gwf_add_charsets_greek-ext' => 0,
    'site_name_font_gwf_add_charsets_cyrillic' => 0,
    'site_name_font_gwf_add_charsets_cyrillic-ext' => 0,
    'site_name_font_gwf_add_charsets_khmer' => 0,
    'site_name_font_gwf_add_charsets_vietnamese' => 0,
    'site_name_font_cfs' => '',
    'site_name_font_size' => '<none>',
    'site_slogan_font_type' => '<none>',
    'site_slogan_font' => 'bf-sss',
    'site_slogan_font_gwf' => '',
    'site_slogan_font_gwf_add_styles' => 0,
    'site_slogan_font_gwf_add_styles_300' => 0,
    'site_slogan_font_gwf_add_styles_300italic' => 0,
    'site_slogan_font_gwf_add_styles_400' => 0,
    'site_slogan_font_gwf_add_styles_400italic' => 0,
    'site_slogan_font_gwf_add_styles_700' => 0,
    'site_slogan_font_gwf_add_styles_700italic' => 0,
    'site_slogan_font_gwf_add_charsets' => 0,
    'site_slogan_font_gwf_add_charsets_latin' => 0,
    'site_slogan_font_gwf_add_charsets_latin-ext' => 0,
    'site_slogan_font_gwf_add_charsets_greek' => 0,
    'site_slogan_font_gwf_add_charsets_greek-ext' => 0,
    'site_slogan_font_gwf_add_charsets_cyrillic' => 0,
    'site_slogan_font_gwf_add_charsets_cyrillic-ext' => 0,
    'site_slogan_font_gwf_add_charsets_khmer' => 0,
    'site_slogan_font_gwf_add_charsets_vietnamese' => 0,
    'site_slogan_font_cfs' => '',
    'site_slogan_font_size' => '<none>',
    'page_title_font_type' => '<none>',
    'page_title_font' => 'bf-sss',
    'page_title_font_gwf' => '',
    'page_title_font_gwf_add_styles' => 0,
    'page_title_font_gwf_add_styles_300' => 0,
    'page_title_font_gwf_add_styles_300italic' => 0,
    'page_title_font_gwf_add_styles_400' => 0,
    'page_title_font_gwf_add_styles_400italic' => 0,
    'page_title_font_gwf_add_styles_700' => 0,
    'page_title_font_gwf_add_styles_700italic' => 0,
    'page_title_font_gwf_add_charsets' => 0,
    'page_title_font_gwf_add_charsets_latin' => 0,
    'page_title_font_gwf_add_charsets_latin-ext' => 0,
    'page_title_font_gwf_add_charsets_greek' => 0,
    'page_title_font_gwf_add_charsets_greek-ext' => 0,
    'page_title_font_gwf_add_charsets_cyrillic' => 0,
    'page_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'page_title_font_gwf_add_charsets_khmer' => 0,
    'page_title_font_gwf_add_charsets_vietnamese' => 0,
    'page_title_font_cfs' => '',
    'page_title_font_size' => '<none>',
    'node_title_font_type' => '<none>',
    'node_title_font' => 'bf-sss',
    'node_title_font_gwf' => '',
    'node_title_font_gwf_add_styles' => 0,
    'node_title_font_gwf_add_styles_300' => 0,
    'node_title_font_gwf_add_styles_300italic' => 0,
    'node_title_font_gwf_add_styles_400' => 0,
    'node_title_font_gwf_add_styles_400italic' => 0,
    'node_title_font_gwf_add_styles_700' => 0,
    'node_title_font_gwf_add_styles_700italic' => 0,
    'node_title_font_gwf_add_charsets' => 0,
    'node_title_font_gwf_add_charsets_latin' => 0,
    'node_title_font_gwf_add_charsets_latin-ext' => 0,
    'node_title_font_gwf_add_charsets_greek' => 0,
    'node_title_font_gwf_add_charsets_greek-ext' => 0,
    'node_title_font_gwf_add_charsets_cyrillic' => 0,
    'node_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'node_title_font_gwf_add_charsets_khmer' => 0,
    'node_title_font_gwf_add_charsets_vietnamese' => 0,
    'node_title_font_cfs' => '',
    'node_title_font_size' => '<none>',
    'comment_title_font_type' => '<none>',
    'comment_title_font' => 'bf-sss',
    'comment_title_font_gwf' => '',
    'comment_title_font_gwf_add_styles' => 0,
    'comment_title_font_gwf_add_styles_300' => 0,
    'comment_title_font_gwf_add_styles_300italic' => 0,
    'comment_title_font_gwf_add_styles_400' => 0,
    'comment_title_font_gwf_add_styles_400italic' => 0,
    'comment_title_font_gwf_add_styles_700' => 0,
    'comment_title_font_gwf_add_styles_700italic' => 0,
    'comment_title_font_gwf_add_charsets' => 0,
    'comment_title_font_gwf_add_charsets_latin' => 0,
    'comment_title_font_gwf_add_charsets_latin-ext' => 0,
    'comment_title_font_gwf_add_charsets_greek' => 0,
    'comment_title_font_gwf_add_charsets_greek-ext' => 0,
    'comment_title_font_gwf_add_charsets_cyrillic' => 0,
    'comment_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'comment_title_font_gwf_add_charsets_khmer' => 0,
    'comment_title_font_gwf_add_charsets_vietnamese' => 0,
    'comment_title_font_cfs' => '',
    'comment_title_font_size' => '<none>',
    'block_title_font_type' => '<none>',
    'block_title_font' => 'bf-sss',
    'block_title_font_gwf' => '',
    'block_title_font_gwf_add_styles' => 0,
    'block_title_font_gwf_add_styles_300' => 0,
    'block_title_font_gwf_add_styles_300italic' => 0,
    'block_title_font_gwf_add_styles_400' => 0,
    'block_title_font_gwf_add_styles_400italic' => 0,
    'block_title_font_gwf_add_styles_700' => 0,
    'block_title_font_gwf_add_styles_700italic' => 0,
    'block_title_font_gwf_add_charsets' => 0,
    'block_title_font_gwf_add_charsets_latin' => 0,
    'block_title_font_gwf_add_charsets_latin-ext' => 0,
    'block_title_font_gwf_add_charsets_greek' => 0,
    'block_title_font_gwf_add_charsets_greek-ext' => 0,
    'block_title_font_gwf_add_charsets_cyrillic' => 0,
    'block_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'block_title_font_gwf_add_charsets_khmer' => 0,
    'block_title_font_gwf_add_charsets_vietnamese' => 0,
    'block_title_font_cfs' => '',
    'block_title_font_size' => '<none>',
    'content_headings_h1h4_font_type' => '<none>',
    'content_headings_h1h4_font' => 'bf-sss',
    'content_headings_h1h4_font_gwf' => '',
    'content_headings_h1h4_font_gwf_add_styles' => 0,
    'content_headings_h1h4_font_gwf_add_styles_300' => 0,
    'content_headings_h1h4_font_gwf_add_styles_300italic' => 0,
    'content_headings_h1h4_font_gwf_add_styles_400' => 0,
    'content_headings_h1h4_font_gwf_add_styles_400italic' => 0,
    'content_headings_h1h4_font_gwf_add_styles_700' => 0,
    'content_headings_h1h4_font_gwf_add_styles_700italic' => 0,
    'content_headings_h1h4_font_gwf_add_charsets' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_latin' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_latin-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_greek' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_greek-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_cyrillic' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_cyrillic-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_khmer' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_vietnamese' => 0,
    'content_headings_h1h4_font_cfs' => '',
    'content_headings_h5h6_font_type' => '<none>',
    'content_headings_h5h6_font' => 'bf-sss',
    'content_headings_h5h6_font_gwf' => '',
    'content_headings_h5h6_font_gwf_add_styles' => 0,
    'content_headings_h5h6_font_gwf_add_styles_300' => 0,
    'content_headings_h5h6_font_gwf_add_styles_300italic' => 0,
    'content_headings_h5h6_font_gwf_add_styles_400' => 0,
    'content_headings_h5h6_font_gwf_add_styles_400italic' => 0,
    'content_headings_h5h6_font_gwf_add_styles_700' => 0,
    'content_headings_h5h6_font_gwf_add_styles_700italic' => 0,
    'content_headings_h5h6_font_gwf_add_charsets' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_latin' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_latin-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_greek' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_greek-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_cyrillic' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_cyrillic-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_khmer' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_vietnamese' => 0,
    'content_headings_h5h6_font_cfs' => '',
    'h1_font_size' => '2em',
    'h2_font_size' => '1.6em',
    'h3_font_size' => '1.4em',
    'h4_font_size' => '1.2em',
    'h5_font_size' => '1em',
    'h6_font_size' => '1em',
    'main_menu_font_type' => '<none>',
    'main_menu_font' => 'bf-sss',
    'main_menu_font_gwf' => '',
    'main_menu_font_gwf_add_styles' => 0,
    'main_menu_font_gwf_add_styles_300' => 0,
    'main_menu_font_gwf_add_styles_300italic' => 0,
    'main_menu_font_gwf_add_styles_400' => 0,
    'main_menu_font_gwf_add_styles_400italic' => 0,
    'main_menu_font_gwf_add_styles_700' => 0,
    'main_menu_font_gwf_add_styles_700italic' => 0,
    'main_menu_font_gwf_add_charsets' => 0,
    'main_menu_font_gwf_add_charsets_latin' => 0,
    'main_menu_font_gwf_add_charsets_latin-ext' => 0,
    'main_menu_font_gwf_add_charsets_greek' => 0,
    'main_menu_font_gwf_add_charsets_greek-ext' => 0,
    'main_menu_font_gwf_add_charsets_cyrillic' => 0,
    'main_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'main_menu_font_gwf_add_charsets_khmer' => 0,
    'main_menu_font_gwf_add_charsets_vietnamese' => 0,
    'main_menu_font_cfs' => '',
    'main_menu_font_size' => '<none>',
    'secondary_menu_font_type' => '<none>',
    'secondary_menu_font' => 'bf-sss',
    'secondary_menu_font_gwf' => '',
    'secondary_menu_font_gwf_add_styles' => 0,
    'secondary_menu_font_gwf_add_styles_300' => 0,
    'secondary_menu_font_gwf_add_styles_300italic' => 0,
    'secondary_menu_font_gwf_add_styles_400' => 0,
    'secondary_menu_font_gwf_add_styles_400italic' => 0,
    'secondary_menu_font_gwf_add_styles_700' => 0,
    'secondary_menu_font_gwf_add_styles_700italic' => 0,
    'secondary_menu_font_gwf_add_charsets' => 0,
    'secondary_menu_font_gwf_add_charsets_latin' => 0,
    'secondary_menu_font_gwf_add_charsets_latin-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_greek' => 0,
    'secondary_menu_font_gwf_add_charsets_greek-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_cyrillic' => 0,
    'secondary_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_khmer' => 0,
    'secondary_menu_font_gwf_add_charsets_vietnamese' => 0,
    'secondary_menu_font_cfs' => '',
    'secondary_menu_font_size' => '<none>',
    'block_menu_font_type' => '<none>',
    'block_menu_font' => 'bf-sss',
    'block_menu_font_gwf' => '',
    'block_menu_font_gwf_add_styles' => 0,
    'block_menu_font_gwf_add_styles_300' => 0,
    'block_menu_font_gwf_add_styles_300italic' => 0,
    'block_menu_font_gwf_add_styles_400' => 0,
    'block_menu_font_gwf_add_styles_400italic' => 0,
    'block_menu_font_gwf_add_styles_700' => 0,
    'block_menu_font_gwf_add_styles_700italic' => 0,
    'block_menu_font_gwf_add_charsets' => 0,
    'block_menu_font_gwf_add_charsets_latin' => 0,
    'block_menu_font_gwf_add_charsets_latin-ext' => 0,
    'block_menu_font_gwf_add_charsets_greek' => 0,
    'block_menu_font_gwf_add_charsets_greek-ext' => 0,
    'block_menu_font_gwf_add_charsets_cyrillic' => 0,
    'block_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'block_menu_font_gwf_add_charsets_khmer' => 0,
    'block_menu_font_gwf_add_charsets_vietnamese' => 0,
    'block_menu_font_cfs' => '',
    'block_menu_font_size' => '<none>',
    'selectors_font_type' => '<none>',
    'selectors_font' => 'bf-sss',
    'selectors_font_gwf' => '',
    'selectors_font_add_styles' => 0,
    'selectors_font_add_styles_300' => 0,
    'selectors_font_add_styles_300italic' => 0,
    'selectors_font_add_styles_400' => 0,
    'selectors_font_add_styles_400italic' => 0,
    'selectors_font_add_styles_700' => 0,
    'selectors_font_add_styles_700italic' => 0,
    'selectors_font_add_charsets' => 0,
    'selectors_font_add_charsets_latin' => 0,
    'selectors_font_add_charsets_latin-ext' => 0,
    'selectors_font_add_charsets_greek' => 0,
    'selectors_font_add_charsets_greek-ext' => 0,
    'selectors_font_add_charsets_cyrillic' => 0,
    'selectors_font_add_charsets_cyrillic-ext' => 0,
    'selectors_font_add_charsets_khmer' => 0,
    'selectors_font_add_charsets_vietnamese' => 0,
    'selectors_font_cfs' => '',
    'selectors_css' => '',
    'site_name_case' => 'snc-n',
    'site_name_weight' => 'snw-n',
    'site_name_alignment' => 'sna-l',
    'site_name_shadow' => 'sns-n',
    'site_slogan_case' => 'ssc-n',
    'site_slogan_weight' => 'ssw-n',
    'site_slogan_alignment' => 'ssa-l',
    'site_slogan_shadow' => 'sss-n',
    'page_title_case' => 'ptc-n',
    'page_title_weight' => 'ptw-b',
    'page_title_alignment' => 'pta-l',
    'page_title_shadow' => 'pts-n',
    'node_title_case' => 'ntc-n',
    'node_title_weight' => 'ntw-b',
    'node_title_alignment' => 'nta-l',
    'node_title_shadow' => 'nts-n',
    'comment_title_case' => 'ctc-n',
    'comment_title_weight' => 'ctw-b',
    'comment_title_alignment' => 'cta-l',
    'comment_title_shadow' => 'cts-n',
    'block_title_case' => 'btc-n',
    'block_title_weight' => 'btw-b',
    'block_title_alignment' => 'bta-l',
    'block_title_shadow' => 'bts-n',
    'image_alignment' => 'ia-n',
    'image_alignment_teaser' => 'iat-n',
    'image_caption_teaser' => 0,
    'image_caption_full' => 0,
    'image_teaser' => 0,
    'at__active_tab' => 'edit-images',
    'at_core' => '7.x-3.x',
    'nice_menus_custom_css' => '',
  );
  $export['theme_custom_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bartik';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ohm_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'omega_toggle_front_page_content' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/acquia/AcquiaDrupalLogo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_enable_warning' => TRUE,
    'omega_toggle_extension_layouts' => 1,
    'omega_layout' => 'hero',
    'omega_toggle_extension_development' => 1,
    'omega_rebuild_theme_registry' => 0,
    'omega_rebuild_aggregates' => 0,
    'omega_browser_width_indicator' => 0,
    'omega_livereload' => 0,
    'omega_livereload_script' => 'http://localhost:35729/livereload.js',
    'omega_livereload_host' => 'localhost',
    'omega_livereload_port' => '35729',
    'omega_demo_regions' => 1,
    'omega_demo_regions_list' => array(
      'navigation' => 'navigation',
      'header' => 'header',
      'hero' => 'hero',
      'highlighted' => 'highlighted',
      'help' => 'help',
      'content' => 'content',
      'sidebar_first' => 'sidebar_first',
      'sidebar_second' => 'sidebar_second',
      'footer' => 'footer',
      'branding' => 0,
    ),
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_user_scaleable' => 1,
    'omega_chrome_edge' => 1,
    'omega_chrome_popup' => 0,
    'omega_chrome_notice' => 0,
    'omega_toggle_extension_assets' => 1,
    'omega_js_footer' => array(),
    'omega_css_exclude' => array(),
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 0,
      ),
      'respond' => array(
        'status' => 0,
      ),
      'pie' => array(
        'status' => 0,
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 1,
      ),
    ),
    'ohm_enable_warning' => 0,
    'nice_menus_custom_css' => '',
  );
  $export['theme_ohm_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_omega_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'omega_toggle_front_page_content' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/acquia/AcquiaDrupalLogo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'omega_enable_warning' => 1,
    'omega_toggle_extension_layouts' => 1,
    'omega_layout' => 'simple',
    'omega_toggle_extension_development' => 1,
    'omega_rebuild_theme_registry' => 0,
    'omega_rebuild_aggregates' => 0,
    'omega_browser_width_indicator' => 0,
    'omega_livereload' => 1,
    'omega_livereload_script' => 'http://localhost:35729/livereload.js',
    'omega_livereload_host' => 'localhost',
    'omega_livereload_port' => '35729',
    'omega_demo_regions' => 1,
    'omega_demo_regions_list' => array(
      'branding' => 'branding',
      'header' => 'header',
      'navigation' => 'navigation',
      'highlighted' => 'highlighted',
      'help' => 'help',
      'content' => 'content',
      'sidebar_first' => 'sidebar_first',
      'sidebar_second' => 'sidebar_second',
      'footer' => 'footer',
    ),
    'omega_toggle_extension_compatibility' => 1,
    'omega_conditional_classes_html' => 1,
    'omega_apple_touch' => 1,
    'omega_cleartype' => 1,
    'omega_handheld_friendly' => 1,
    'omega_mobile_optimized' => 1,
    'omega_viewport' => 1,
    'omega_viewport_user_scaleable' => 1,
    'omega_chrome_edge' => 1,
    'omega_chrome_popup' => 0,
    'omega_chrome_notice' => 0,
    'omega_toggle_extension_assets' => 1,
    'omega_js_footer' => array(),
    'omega_css_exclude' => array(),
    'omega_js_exclude' => array(),
    'omega_libraries' => array(
      'selectivizr' => array(
        'status' => 0,
      ),
      'respond' => array(
        'status' => 0,
      ),
      'pie' => array(
        'status' => 0,
        'selectors' => array(),
      ),
      'html5shiv' => array(
        'status' => 0,
      ),
    ),
    'nice_menus_custom_css' => '',
  );
  $export['theme_omega_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_tao_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/acquia/AcquiaDrupalLogo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'nice_menus_custom_css' => '',
  );
  $export['theme_tao_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tracker_index_nid';
  $strongarm->value = 0;
  $export['tracker_index_nid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_check_disabled';
  $strongarm->value = 0;
  $export['update_check_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_check_frequency';
  $strongarm->value = '7';
  $export['update_check_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1393835018;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_email_notification';
  $strongarm->value = 1392798875;
  $export['update_last_email_notification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notification_threshold';
  $strongarm->value = 'all';
  $export['update_notification_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'mike.blink.alexeenko@gmail.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array(
    '9cf22433e0efbd8b206c8e4c2edb177c' => 'workbench_recent_content-block_1',
  );
  $export['views_block_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'frontpage' => FALSE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
