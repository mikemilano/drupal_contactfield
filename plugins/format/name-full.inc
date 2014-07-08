<?php

/**
 * @file
 * Generates a first name + last name format.
 */

$plugin = array(
  'title' => t('Name (First name, Last name)'),
  'format callback' => 'contactfield_format_name_full_generate',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_name_full_generate(&$format, $contact) {
  $format['name_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'name-block')),
    '#weight' => -100,
  );
  $format['name_block']['first_name'] = array(
    '#title' => t('First name'),
    '#size' => 30,
    '#required' => TRUE,
    '#attributes' => array('class' => array('first-name')),
  );
  $format['name_block']['last_name'] = array(
    '#title' => t('Last name'),
    '#size' => 30,
    '#required' => TRUE,
    '#prefix' => ' ',
    '#attributes' => array('class' => array('last-name')),
  );
}
