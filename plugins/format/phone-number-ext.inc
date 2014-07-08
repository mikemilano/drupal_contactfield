<?php

/**
 * @file
 * Generates a phone number format.
 */

$plugin = array(
  'title' => t('Phone number with extension'),
  'format callback' => 'contactfield_format_phone_ext_generate',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_phone_ext_generate(&$format, $contact) {
  $format['phone_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'phone-block')),
    '#weight' => 110,
  );
  $format['phone_block']['phone_number'] = array(
    '#title' => t('Phone number'),
    '#tag' => 'div',
    '#attributes' => array('class' => array('phone-block')),
    '#size' => 30,
    '#required' => TRUE,
  );

  $format['phone_block']['phone_extension'] = array(
    '#title' => t('Ext.'),
    '#tag' => 'div',
    '#attributes' => array('class' => array('phone-block')),
    '#size' => 10,
    '#required' => TRUE,
  );
}
