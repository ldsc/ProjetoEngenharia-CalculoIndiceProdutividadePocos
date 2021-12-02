#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

#include "CBorisov.h"


double CBorisov::CalcBorisov(double _k, double _h, double _mi, double _re, double _rw, double _L)
{
	
	double A, B, C;
	
	A = (2*M_PI*_k*_h)/_mi ;
	B = log((4*_re)/_L);
	C = (_h/_L)*log(_h/(2*M_PI*_rw));
	
	IP = A / (B+C); 
	
	return IP;	
}
