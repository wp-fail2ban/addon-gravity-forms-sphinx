=====================================
WP fail2ban Add-on for Gravity Forms
=====================================

This add-on connects Gravity Forms spam decisions to WP fail2ban. When Gravity
Forms marks an entry as spam, the add-on writes a soft syslog message that an
installed fail2ban filter can match.

Start with :ref:`about` for the message path, then :ref:`installation` for the
shortest working setup. :ref:`configuration` explains the enable switch on
WP fail2ban 6.3.

.. toctree::
   :caption: Manual
   :maxdepth: 2

   about
   installation
   configuration

.. toctree::
   :caption: Reference
   :maxdepth: 2

   defines
   filters
