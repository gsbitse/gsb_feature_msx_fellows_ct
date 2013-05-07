<?php
/**
 * @file
 * gsb_feature_msx_fellows_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_msx_fellows_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|msx_fellows|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'msx_fellows';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_academic_degrees' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Education',
        ),
      ),
    ),
  );
  $export['node|msx_fellows|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_msx_fellows_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|msx_fellows|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'msx_fellows';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_single_public',
        1 => 'field_year',
      ),
      'right' => array(
        2 => 'title',
        3 => 'field_title_position_unlimited',
        4 => 'field_company_organization',
        5 => 'field_location',
        6 => 'field_academic_degrees',
        7 => 'field_body',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'left',
      'field_year' => 'left',
      'title' => 'right',
      'field_title_position_unlimited' => 'right',
      'field_company_organization' => 'right',
      'field_location' => 'right',
      'field_academic_degrees' => 'right',
      'field_body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|msx_fellows|default'] = $ds_layout;

  return $export;
}