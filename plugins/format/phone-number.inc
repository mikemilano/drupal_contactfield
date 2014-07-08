<?php

/**
 * @file
 * Generates a phone number format.
 */

$plugin = array(
  'title' => t('Phone number'),
  'format callback' => 'contactfield_format_phone_generate',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_phone_generate(&$format, $contact) {
  $format['phone_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'phone-block')),
    '#weight' => 110,
  );
  $format['phone_block']['phone_number'] = array(
    '#title' => t('Phone'),
    '#tag' => 'div',
    '#attributes' => array('class' => array('phone-block')),
    '#size' => 30,
    '#required' => TRUE,
  );
}
