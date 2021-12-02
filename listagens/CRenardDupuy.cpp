#define _USE_MATH_DEFINES
#include <math.h>

#include "CRenardDupuy.h"

		double CRenardDupuy::CalcRenardDupuy(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff)
		{
			
			double a, X, A, rw, B, C, c;
			
			a = (_L/2)*sqrt(0.5 + (sqrt(0.25 + (pow((2*_re)/_L, 4)))));
			X = (2*a)/_L;
			A = (2*M_PI*_k*_h)/(_mi);
			rw = ((1 + _Keff)/(2*_Keff))*_rw;
			c = (_h)/(2*M_PI*rw);
			B = (((_Keff*_h)/_L))*(log(c));
			C = 1/((acosh(X)) + B);
			
			
			IP = A*(C);
			
			return IP;
			
		}

