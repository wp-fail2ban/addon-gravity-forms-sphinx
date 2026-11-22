.. _installation:

Installation
============

You need WP fail2ban, Gravity Forms, and this add-on active on the same site.
Activate the add-on from the WordPress plugins screen. It remains available
when WP fail2ban is older than the preferred release, but the plugins list
shows a warning until the parent meets the floor of 4.3.0.9 or 4.4.0 and
later.

Copy ``wordpress-gravityforms-extra.conf`` from the add-on package into the
host ``fail2ban`` ``filter.d`` directory, then add a jail that uses that
filter. The host administrator must perform those steps: WordPress cannot
change privileged fail2ban configuration. See :ref:`configuration_fail2ban`
for an example jail.

Submit a form that Gravity Forms marks as spam and confirm that the soft
message appears in the auth log the jail reads. A match in fail2ban still
depends on the jail threshold and action.

.. seealso::
   * :ref:`configuration`
   * :ref:`configuration_fail2ban`
   * :ref:`reference_filters`
