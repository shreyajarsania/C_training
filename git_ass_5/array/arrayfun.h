#include <stdio.h>
#define DEBUG 1

#ifdef DEBUG
	#define debug_print(fmt,...) printf("Debug:%s:%d:%s()"fmt,__FILE__,__LINE__,__func__,__VA_ARGS__)
#endif

enum status_t {NO_ERROR = 0, ERR_SIZE = 1, NULL_SIZE = 2, FAIL = -1};
