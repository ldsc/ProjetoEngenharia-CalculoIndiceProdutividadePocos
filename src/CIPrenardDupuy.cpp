#define _USE_MATH_DEFINES
#include <math.h>

#include "CIPrenardDupuy.h"

		double CIPrenardDupuy::CalcRenardDupuy(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff)
		{
			
			double a, X, A, rw, B, C, c;
			
			a = (_L/2.0)*sqrt(0.5 + (sqrt(0.25 + (pow((2.0*_re)/_L, 4.0)))));
			X = (2.0*a)/_L;
			A = (2.0*M_PI*_k*_h)/(_mi);
			rw = ((1.0 + _Keff)/(2.0*_Keff))*_rw;
			c = (_h)/(2.0*M_PI*rw);
			B = (((_Keff*_h)/_L))*(log(c));
			C = 1.0/((acosh(X)) + B);
			
			
			IP = A*(C);
			
			return IP;
			
		}

