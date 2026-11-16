.. _release:

===================
Release information
===================

WP fail2ban Gravity Forms 3.0.0
-------------------------------

Version 3.0.0 adds an operator-facing enable switch for Gravity Forms spam
logging.

Reader-visible changes in this release include:

* QuickStart and the Gravity Forms settings **Enabled** control turn spam
  logging on or off (default enabled);
* :ref:`WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED` locks that choice from
  ``wp-config.php``;
* when logging is off, Gravity Forms spam hooks and message registration stay
  off while the settings UI remains available.
