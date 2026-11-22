.. _about:

About Gravity Forms
===================

This add-on turns a Gravity Forms spam decision into a WP fail2ban message.
When Gravity Forms marks an entry as spam, the add-on writes a soft syslog
message. An installed fail2ban filter can match that message, a jail can count
it, and a ban action can change the host firewall. The message alone does not
prove that any of those later stages happened.

The add-on does not detect spam itself. Gravity Forms and any anti-spam
plugins already decide that an entry is spam; this add-on only records the
source address for fail2ban.

WP fail2ban supplies the registration and logging path. The host administrator
installs the shipped filter and jail. See the main WP fail2ban
:ref:`logging model <wp-fail2ban:operating_logging>` for that general
message-to-ban path.

.. seealso::
   * :ref:`installation`
   * :ref:`configuration`
   * :ref:`reference_filters`
