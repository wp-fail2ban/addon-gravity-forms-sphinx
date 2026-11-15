.. _WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED:

.. role:: php(code)
   :language: php

WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED
---------------------------------------

.. rubric:: Lock Gravity Forms spam logging on or off.

----

Fixes whether the add-on logs Gravity Forms spam submissions. When the
constant is defined, it overrides the saved WordPress option
``wpf2b_addon_gf_enabled`` and locks the QuickStart card and the Gravity Forms
settings **Enabled** control.

A :php:`true` value keeps logging on; a :php:`false` value keeps it off.
Without the constant, a missing option defaults to enabled. Disabling the
add-on stops Gravity Forms spam hooks and message registration without removing
the settings UI that turns it back on.

.. code-block:: php
   :caption: Example: Disable Gravity Forms spam logging

   define('WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED', false);

**Accepted values:** :php:`true` or :php:`false`

**Default:** enabled (the option is absent or stores ``'1'``)

The option stores only the strings ``'0'`` and ``'1'``. Free and Premium both
save the option unless a PHP constant locks it.

.. seealso::
   * :ref:`configuration`
   * :ref:`defines`

.. rubric:: History
.. versionadded:: 3.0.0
