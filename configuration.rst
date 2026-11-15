.. _configuration:

Configuration
=============

Enable logging
--------------

QuickStart and the Gravity Forms settings **Enabled** control save
``wpf2b_addon_gf_enabled`` (default enabled). A PHP constant
:ref:`WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED` takes priority over the saved
option and locks both controls. When logging is off, the add-on registers no
messages and does not hook Gravity Forms.

fail2ban filter and jail
------------------------

#. Copy ``wordpress-gravityforms-extra.conf`` to your ``fail2ban/filters.d``
   directory
#. Edit ``jail.local`` to include something like:

.. code-block:: sh

   [wordpress-gravityforms-extra]
   enabled = true
   filter = wordpress-gravityforms-extra
   logpath = /var/log/auth.log
   maxretry = 1
   port = http,https

#. Reload or restart ``fail2ban``

.. seealso::
   * :ref:`WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED`
   * :ref:`defines`
