===============================
WP fail2ban Gravity Forms 3.0
===============================

This add-on extends `WP fail2ban <https://wp-fail2ban.com/>`_ with support for
spam form submissions via Gravity Forms. When Gravity Forms marks a submission
as spam, the add-on writes a soft message that fail2ban can match.

:ref:`WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED` locks the shared enable option
used by QuickStart and the Gravity Forms settings tab. :ref:`configuration`
covers the fail2ban filter and jail setup.

.. toctree::
   :caption: Manual
   :maxdepth: 2

   configuration

.. toctree::
   :caption: Reference
   :maxdepth: 2

   defines
   release
