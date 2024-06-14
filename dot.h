#ifndef _DOT_H_
#define _DOT_H_

#define DOT_PROC(Trig, Out)
{
	UCHAR dot;
	dot = DOT_Evaluate(Trig);
	Out = dot & 0x01;
}

UCHAR DOT_Evaluate(void);

#endif