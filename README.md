drupal_contactfield
===================

This is a prototype at this point. It has only been lightly tested.

Based on the Drupal 7 addressfield module, this module adds fields for phone number, extension, mobile, fax, and email address.

Unlike addressfield and addressfield_phone, the additional fields are stored in their own columns of the field table as opposed to serialized into a single data column.

Another issue this solves for me is that it works well with field_encrypt. The serialized data in the addressfield_phone approach does not play well with that module although I'm sure it could be resolved with a little effort.

I'm not able to maintain anything like this so I'll keep it here on github for reference. It could use some validation and the new field configuration should be a little more flexible.

![alt tag](https://raw.github.com/mikemilano/drupal_contactfield/master/screenshot.png)
