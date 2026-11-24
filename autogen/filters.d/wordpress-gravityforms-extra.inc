.. code-block:: ini

   # Fail2Ban filter for WP fail2ban: Gravity Forms extra failures
   #
   
   [INCLUDES]
   
   before = common.conf
   
   [Definition]
   
   _daemon = (?:wordpress|wp)
   _tail = (?: on <F-SITE_INLINE>\S+(?:/\S+)?</F-SITE_INLINE>)? from <ADDR>
   
   failregex = ^%(__prefix_line)s\(WPf2b\+\+/gravityforms\) Spam form submission<_tail>$
   
   ignoreregex =
   
   journalmatch = SYSLOG_IDENTIFIER=wordpress
   
   # DEV Notes:
   # Requires the 'WP fail2ban' plugin:
   # https://wp-fail2ban.com/
   #
   # Author: Charles Lecklider
   # Version: 3.0.0
   # Build Date: 2026-11-24T03:19:48+00:00
