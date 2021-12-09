#define _USE_MATH_DEFINES
#include <math.h>

#include "CIPgiger.h"


double CIPgiger::CalcGiger(double _k, double _h, double _mi, double _re, double _rw, double _L)
{
	
	double A, B, C, D, E;
	
	A = (2.0*M_PI*_k*_L)/_mi;
	B = _L/_h;
	C = (1.0 + (sqrt((1.0 - pow(( _L/(2.0*_re)) , 2.0)))));
	D = (_L/(2.0*_re));
	E = log(_h/(2.0*M_PI*_rw));
	
	IP = A/((B*log(C/D)) + E);
	
	return IP;
	
}

