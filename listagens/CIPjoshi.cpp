#define _USE_MATH_DEFINES
#include <math.h>


#include "CIPjoshi.h"


double CIPjoshi::CalcJoshiHorizontal(double _k, double _h, double _mi, double _re, double _rw, double _L)
{
	
	double a, A, B, C;
	
	a = (_L/2.0)*sqrt(0.5 + (sqrt(0.25 + (pow((2.0*_re)/_L, 4.0)))));
	A = (2.0*M_PI*_k*_h)/_mi;
	B = log((a + (sqrt(pow(a, 2.0) - pow(_L/2.0, 2.0))))/(_L/2.0)); 
	C = (_h/_L)*log(_h/(2.0*_rw));
	
	IP = A / (B + C);
	
	return IP;
}

double CIPjoshi::CalcJoshiAnisotropico(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff)
{
	
	double a, A, B, C;
	
	a = (_L/2.0)*sqrt(0.5 + (sqrt(0.25 + (pow((2.0*_re)/_L, 4.0)))));
	A = (2.0*M_PI*_k*_h)/_mi;
	B = log((a + (sqrt(pow(a, 2.0) - pow(_L/2.0, 2.0))))/(_L/2.0)); 
	C = (_h*_Keff/_L)*log(_h*_Keff/(2.0*_rw));
	
	IP = A / (B + C);
	
	return IP;
	
}
