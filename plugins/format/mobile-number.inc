<?php

/**
 * @file
 * Generates a mobile number format.
 */

$plugin = array(
  'title' => t('Mobile number'),
  'format callback' => 'contactfield_format_mobile_generate',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_mobile_generate(&$format, $contact) {
  $format['mobile_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'mobile-block')),
    '#weight' => 120,
  );
  $format['mobile_block']['mobile_number'] = array(
    '#title' => t('Mobile number'),
    '#tag' => 'div',
    '#attributes' => array('class' => array('mobile-block')),
    '#size' => 30,
    '#required' => TRUE,
  );
}
