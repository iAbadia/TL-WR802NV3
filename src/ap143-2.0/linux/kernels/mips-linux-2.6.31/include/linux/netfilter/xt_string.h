#ifndef _XT_STRING_H
#define _XT_STRING_H

#include <linux/types.h>

#define	XT_STRING_MAX_NUM			10

#define XT_STRING_MAX_PATTERN_SIZE	32
#define XT_STRING_MAX_ALGO_NAME_SIZE 16

enum {
	XT_STRING_FLAG_INVERT		= 0x01,
	XT_STRING_FLAG_IGNORECASE	= 0x02
};

struct xt_string_info
{
	__u16 from_offset;
	__u16 to_offset;
	char	  algo[XT_STRING_MAX_ALGO_NAME_SIZE];
	char 	pattern[XT_STRING_MAX_NUM][XT_STRING_MAX_PATTERN_SIZE];	/* improve to multistring. */
	__u8	patlen[XT_STRING_MAX_NUM];
	union {
		struct {
			__u8  invert;
		} v0;

		struct {
			__u8  flags;
		} v1;
	} u;

	/* Used internally by the kernel */
	struct ts_config __attribute__((aligned(8))) *config[XT_STRING_MAX_NUM];

	__u32 string_count;
};

#endif /*_XT_STRING_H*/
