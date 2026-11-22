.. _reference_filters:

=======
Filters
=======

The shipped ``wordpress-gravityforms-extra.conf`` filter matches the soft
message written for a Gravity Forms spam submission. A match identifies a
message; the jail still decides the threshold and action. See
:ref:`configuration_fail2ban`.

The filter shown below is included from the generated package input, so the
reference cannot acquire a separate hand-maintained expression.

``wordpress-gravityforms-extra.conf``
-------------------------------------

.. include:: autogen/filters.d/wordpress-gravityforms-extra.inc
