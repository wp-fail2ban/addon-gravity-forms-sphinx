.. _configuration:

Configuration
=============

The add-on has one control: whether it logs Gravity Forms spam submissions.
It defaults to enabled, which matches earlier releases that always logged.

On WP fail2ban 6.3 or later the same switch appears in two places:

* the Gravity Forms card on Quick Start;
* the Gravity Forms settings tab while advanced settings are enabled.

Both write the site option ``wpf2b_addon_gf_enabled`` as the string ``1`` or
``0``. A missing option means enabled. Defining
:ref:`WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED` in ``wp-config.php`` overrides
the saved value and locks both controls.

When the add-on is disabled it registers no WP fail2ban messages and does not
hook Gravity Forms. The splash page, and on 6.3 the Quick Start card and
settings tab, remain so you can turn it back on.

Parents before 6.3 have no switch. Logging stays on, as before.

.. toctree::
   :maxdepth: 1

   configuration/fail2ban

.. seealso::
   * :ref:`WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED`
   * :ref:`wp-fail2ban:configuration_quickstart`
