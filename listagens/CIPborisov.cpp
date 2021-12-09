#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

#include "CIPborisov.h"


double CIPborisov::CalcBorisov(double _k, double _h, double _mi, double _re, double _rw, double _L)
{
	
	double A, B, C;
	
	A = (2.0*M_PI*_k*_h)/_mi ;
	B = log((4.0*_re)/_L);
	C = (_h/_L)*log(_h/(2.0*M_PI*_rw));
	
	IP = A / (B+C); 
	
	return IP;	
}
