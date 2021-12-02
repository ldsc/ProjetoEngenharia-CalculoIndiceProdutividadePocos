#define _USE_MATH_DEFINES
#include <math.h>

#include "CJoshiHorizontal.h"

double CJoshiHorizontal::CalcJoshi(double _k, double _h, double _mi, double _re, double _rw, double _L)
{
	
	double a, A, B, C;
	
	a = (_L/2)*sqrt(0.5 + (sqrt(0.25 + (pow((2*_re)/_L, 4)))));
	A = (2*M_PI*_k*_h)/_mi;
	B = log((a + (sqrt(pow(a, 2) - pow(_L/2, 2))))/(_L/2)); 
	C = (_h/_L)*log(_h/(2*_rw));
	
	IP = A / (B + C);
	
	return IP;
}

