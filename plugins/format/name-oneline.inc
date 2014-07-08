<?php

/**
 * @file
 * Generates a first name + last name format.
 */

$plugin = array(
  'title' => t('Name (single line)'),
  'format callback' => 'contactfield_format_name_oneline_generate',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_name_oneline_generate(&$format, $contact) {
  $format['name_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'name-block')),
    '#weight' => -100,
  );
  $format['name_block']['name_line'] = array(
    '#title' => t('Full name'),
    '#tag' => 'div',
    '#attributes' => array('class' => array('name-block')),
    '#size' => 30,
    '#required' => TRUE,
  );
}
