<?php

/**
 * @file
 * Generates a fax number format.
 */

$plugin = array(
  'title' => t('Fax number'),
  'format callback' => 'contactfield_format_fax_generate',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_fax_generate(&$format, $contact) {
  $format['fax_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'fax-block')),
    '#weight' => 130,
  );
  $format['fax_block']['fax_number'] = array(
    '#title' => t('Fax'),
    '#tag' => 'div',
    '#attributes' => array('class' => array('fax-block')),
    '#size' => 30,
    '#required' => TRUE,
  );
}
