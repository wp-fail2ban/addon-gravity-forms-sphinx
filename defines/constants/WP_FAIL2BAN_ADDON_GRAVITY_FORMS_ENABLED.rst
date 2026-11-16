.. _WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED:

.. role:: php(code)
   :language: php

WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED
---------------------------------------

.. rubric:: Lock Gravity Forms spam logging on or off.

----

Fixes whether the add-on logs Gravity Forms spam submissions. When the
constant is defined, it overrides the enable choice from QuickStart and the
Gravity Forms settings **Enabled** control and locks both controls.

A :php:`true` value keeps logging on; a :php:`false` value keeps it off.
Without the constant, logging defaults to enabled. Disabling the add-on stops
Gravity Forms spam hooks and message registration without removing the
settings UI that turns it back on.

.. code-block:: php
   :caption: Example: Disable Gravity Forms spam logging

   define('WP_FAIL2BAN_ADDON_GRAVITY_FORMS_ENABLED', false);

**Accepted values:** :php:`true` or :php:`false`

**Default:** enabled

Free and Premium both honour the enable switch unless a PHP constant locks it.

.. seealso::
   * :ref:`configuration`
   * :ref:`defines`

.. rubric:: History
.. versionadded:: 3.0.0
