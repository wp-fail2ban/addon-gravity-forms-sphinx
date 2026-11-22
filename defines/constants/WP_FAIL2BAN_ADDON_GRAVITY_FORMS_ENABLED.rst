.. _WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED:

.. role:: php(code)
   :language: php

WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED
---------------------------------------

.. rubric:: Force Gravity Forms spam logging on or off from ``wp-config.php``.

----

When this constant is defined, its truthiness decides whether the add-on
registers its WP fail2ban message and hooks Gravity Forms. The saved site
option ``wpf2b_addon_gf_enabled`` is ignored, and both the Quick Start card
and the settings-tab checkbox are locked.

.. code-block:: php
   :caption: Keep logging on regardless of the saved option

   define('WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED', true);

.. code-block:: php
   :caption: Keep logging off regardless of the saved option

   define('WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED', false);

**Accepted values:** any PHP value; cast with ordinary boolean rules

**Default:** the constant is not defined. A missing option means enabled; a
saved ``'0'`` means disabled; a saved ``'1'`` means enabled.

Without the constant, the WordPress UI stores the strings ``'0'`` and ``'1'``.
Do not store a boolean ``false`` in the option: WordPress treats that as a
missing option and would re-enable the add-on.

The constant is available on every supported parent. The checkbox UI exists
only on WP fail2ban 6.3 and later.

.. rubric:: History
.. versionadded:: 3.0.0
