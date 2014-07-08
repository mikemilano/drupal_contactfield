<?php

/**
 * @file
 * Generates a first name + last name format.
 */

$plugin = array(
  'title' => t('Organisation (single line)'),
  'format callback' => 'contactfield_format_organisation_generate',
  'type' => 'organisation',
  'weight' => -10,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_organisation_generate(&$format, $contact) {
  $format['organisation_block'] = array(
    '#type' => 'contactfield_container',
    '#attributes' => array('class' => array('contactfield-container-inline', 'name-block')),
    '#weight' => -50,
  );
  $format['organisation_block']['organisation_name'] = array(
    '#title' => t('Company'),
    '#size' => 30,
    '#attributes' => array('class' => array('organisation-name')),
  );
}
