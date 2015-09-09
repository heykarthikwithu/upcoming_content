
<?php

function upcoming_content_views_default_views() {
 
// exported view goes here

$view = new view();
$view->name = 'upcoming';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Upcoming';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'page' => 'page',
);

/* Display: Monthly wise */
$handler = $view->new_display('page', 'Monthly wise', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Monthly wise';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'page' => 'page',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Date - end date (field_date:value2) */
$handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value2']['group'] = 2;
$handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
$handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
$handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_date_value2']['granularity'] = 'month';
$handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
/* Filter criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
$handler->display->display_options['filters']['field_date_value']['group'] = 2;
$handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
$handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
$handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_date_value']['granularity'] = 'month';
$handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
$handler->display->display_options['path'] = 'monthly';

/* Display: only-upcoming */
$handler = $view->new_display('page', 'only-upcoming', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'only-upcoming with time';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'page' => 'page',
);
/* Filter criterion: Content: Date - end date (field_date:value2) */
$handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value2']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
$handler->display->display_options['path'] = 'only-upcoming';

/* Display: monthly-upcoming */
$handler = $view->new_display('page', 'monthly-upcoming', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'monthly-upcoming';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'page' => 'page',
);
/* Filter criterion: Content: Date - end date (field_date:value2) */
$handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value2']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_date_value2']['expose']['operator_id'] = 'field_date_value2_op';
$handler->display->display_options['filters']['field_date_value2']['expose']['operator'] = 'field_date_value2_op';
$handler->display->display_options['filters']['field_date_value2']['expose']['identifier'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_date_value2']['granularity'] = 'month';
$handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';
/* Filter criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
$handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
$handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
$handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_date_value']['granularity'] = 'month';
$handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
/* Filter criterion: Content: Date - end date (field_date:value2) */
$handler->display->display_options['filters']['field_date_value2_1']['id'] = 'field_date_value2_1';
$handler->display->display_options['filters']['field_date_value2_1']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value2_1']['field'] = 'field_date_value2';
$handler->display->display_options['filters']['field_date_value2_1']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value2_1']['granularity'] = 'hour';
$handler->display->display_options['filters']['field_date_value2_1']['default_date'] = 'now';
$handler->display->display_options['path'] = 'monthly-upcoming';



 
$views[$view->name] = $view;
 
// return views
  return $views;
}
