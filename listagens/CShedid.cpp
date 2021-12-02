#define _USE_MATH_DEFINES
#include <cmath>

#include "CShedid.h"

double CShedid::CalcShedid(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Bo)
{
	
	double A, B, c, D, C;
	if (_L> 0 && _L<=1000)
		C= 270;
	else if (_L > 1000)
		C= 470 - .2*_L;

	A = ((2.0*M_PI*_k*_h)/(_mi*_Bo));
	B = (_h/(2.0*_rw))/(_L/_h);
	c = (.25 + (C/_L))*((1.0/_rw) - (2.0/_h));
	D = log(B) + c;
	
	IP = A/D;
		
	return IP;
}
