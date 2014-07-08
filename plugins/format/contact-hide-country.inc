<?php

/**
 * @file
 * Hide then country when only one country is available.
 */

$plugin = array(
  'title' => t('Hide the country when only one is available'),
  'format callback' => 'contactfield_format_contact_hide_country',
  'type' => 'contact',
  'weight' => -80,
);

/**
 * Format callback.
 *
 * @see CALLBACK_contactfield_format_callback()
 */
function contactfield_format_contact_hide_country(&$format, $contact, $context = array()) {
  $format['country']['#access'] = (count($format['country']['#options']) > 1);
}
