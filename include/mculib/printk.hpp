#pragma once

#ifdef MCULIB_DISABLE_PRINTK
#define printk(...) /**/

#else
#include <mculib/message_log.hpp>
#define printk(...) mculib::messageLog.printf(__VA_ARGS__)

#endif
