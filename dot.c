#include "common.h"
#include "dot.h"
#include "counter.h"

UCHAR g_dot_ready;

UCHAR DOT_Evaluate(void)
{
	UCHAR dot;
	UCHAR trig;
	if(g_dot_ready == 1) {
		dot = 0x01;
	}
	else {
		trig = 
		if(trig == 0x09) {
			g_dot_ready = 1;
		}
		dot = 0x00;
	}
	return dot;
}