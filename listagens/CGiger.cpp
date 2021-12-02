#define _USE_MATH_DEFINES
#include <math.h>

#include "CGiger.h"


double CGiger::CalcGiger(double _k, double _h, double _mi, double _re, double _rw, double _L)
{
	
	double A, B, C, D, E;
	
	A = (2*M_PI*_k*_L)/_mi;
	B = _L/_h;
	C = (1 + (sqrt((1 - pow(( _L/(2*_re)) ,2)))));
	D = (_L/(2*_re));
	E = log(_h/(2*M_PI*_rw));
	
	IP = A/((B*log(C/D)) + E);
	
	return IP;
	
}

