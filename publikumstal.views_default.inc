<?php
/**
 * @file
 * publikumstal.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function publikumstal_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publikumstal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Publikumstal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publikumstal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'webform_submission';
  $handler->display->display_options['row_options']['format'] = 'text';
  /* Field: Webform submissions: Serial number */
  $handler->display->display_options['fields']['serial']['id'] = 'serial';
  $handler->display->display_options['fields']['serial']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['serial']['field'] = 'serial';
  $handler->display->display_options['fields']['serial']['element_label_colon'] = FALSE;
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Title';
  $handler->display->display_options['fields']['value']['format'] = 'text';
  $handler->display->display_options['fields']['value']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value']['webform_cid'] = '4';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Kategori';
  $handler->display->display_options['fields']['value_1']['format'] = 'text';
  $handler->display->display_options['fields']['value_1']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_1']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_1']['webform_cid'] = '1';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Målgruppe';
  $handler->display->display_options['fields']['value_2']['format'] = 'text';
  $handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_2']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_2']['webform_cid'] = '2';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Arrangementstype';
  $handler->display->display_options['fields']['value_3']['format'] = 'text';
  $handler->display->display_options['fields']['value_3']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_3']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_3']['webform_cid'] = '3';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'Antal deltagere';
  $handler->display->display_options['fields']['value_4']['format'] = 'text';
  $handler->display->display_options['fields']['value_4']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_4']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_4']['webform_cid'] = '5';
  $handler->display->display_options['fields']['value_4']['webform_datatype'] = 'number';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Lokation/Afdeling';
  $handler->display->display_options['fields']['value_5']['format'] = 'text';
  $handler->display->display_options['fields']['value_5']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_5']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_5']['webform_cid'] = '6';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = 'Antal udervisere';
  $handler->display->display_options['fields']['value_6']['format'] = 'text';
  $handler->display->display_options['fields']['value_6']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_6']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_6']['webform_cid'] = '7';
  $handler->display->display_options['fields']['value_6']['webform_datatype'] = 'number';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = 'Dato';
  $handler->display->display_options['fields']['value_7']['format'] = 'text';
  $handler->display->display_options['fields']['value_7']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_7']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_7']['webform_cid'] = '8';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = 'Starttidspunkt';
  $handler->display->display_options['fields']['value_8']['format'] = 'text';
  $handler->display->display_options['fields']['value_8']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_8']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_8']['webform_cid'] = '9';
  $handler->display->display_options['fields']['value_8']['webform_datatype'] = 'number';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = 'Sluttidspunkt';
  $handler->display->display_options['fields']['value_9']['format'] = 'text';
  $handler->display->display_options['fields']['value_9']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_9']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_9']['webform_cid'] = '10';
  $handler->display->display_options['fields']['value_9']['webform_datatype'] = 'number';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_10']['id'] = 'value_10';
  $handler->display->display_options['fields']['value_10']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_10']['field'] = 'value';
  $handler->display->display_options['fields']['value_10']['label'] = 'Forberedelsestid';
  $handler->display->display_options['fields']['value_10']['format'] = 'text';
  $handler->display->display_options['fields']['value_10']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_10']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_10']['webform_cid'] = '11';
  $handler->display->display_options['fields']['value_10']['webform_datatype'] = 'number';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_11']['id'] = 'value_11';
  $handler->display->display_options['fields']['value_11']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_11']['field'] = 'value';
  $handler->display->display_options['fields']['value_11']['label'] = 'Ansvarlig (initialer)';
  $handler->display->display_options['fields']['value_11']['format'] = 'text';
  $handler->display->display_options['fields']['value_11']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_11']['webform_nid'] = '17941';
  $handler->display->display_options['fields']['value_11']['webform_cid'] = '14';
  /* Contextual filter: Webform submissions: Node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '17941';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'publikumstal';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'publikum_data_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'publikumstal/csv';
  $translatables['publikumstal'] = array(
    t('Master'),
    t('Publikumstal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Serial number'),
    t('.'),
    t(','),
    t('Title'),
    t('Kategori'),
    t('Målgruppe'),
    t('Arrangementstype'),
    t('Antal deltagere'),
    t('Lokation/Afdeling'),
    t('Antal udervisere'),
    t('Dato'),
    t('Starttidspunkt'),
    t('Sluttidspunkt'),
    t('Forberedelsestid'),
    t('Ansvarlig (initialer)'),
    t('Alle'),
    t('Page'),
    t('Data export'),
  );
  $export['publikumstal'] = $view;

  return $export;
}