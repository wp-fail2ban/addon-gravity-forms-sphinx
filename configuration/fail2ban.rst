.. _configuration_fail2ban:

fail2ban filter and jail
========================

Copy ``filters.d/wordpress-gravityforms-extra.conf`` from the installed
add-on into the host ``fail2ban`` ``filter.d`` directory. WordPress cannot
maintain that privileged copy; compare and update it after relevant add-on
upgrades.

When Gravity Forms marks an entry as spam, the add-on writes::

   (WPf2b++/gravityforms) Spam form submission

The shipped filter matches that soft message. Create a jail that uses the
filter, for example ``jail.d/wordpress-gravityforms.conf``. Replace
``logpath`` with the file that receives the selected facility:

.. code-block:: ini

   [wordpress-gravityforms]
   enabled = true
   filter = wordpress-gravityforms-extra
   logpath = /var/log/auth.log
   port = http,https
   maxretry = 5
   bantime = 3600
   action = %(action_)s

``maxretry = 5`` is an example threshold, not product behaviour. Choose a
count and ban duration that fit the host. Validate and reload fail2ban after
installing or changing the files::

   fail2ban-client -t
   fail2ban-client reload

For a systemd journal jail, use the setup in the main manual's
:ref:`fail2ban configuration <wp-fail2ban:configuration__fail2ban>`.

.. seealso::
   * :ref:`reference_filters`
   * :ref:`configuration`
