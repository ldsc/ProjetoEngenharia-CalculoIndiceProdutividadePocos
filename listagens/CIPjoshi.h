#ifndef CIPJOSHI_H_
#define CIPJOSHI_H_

#include "CCalcIP.h"

class CIPjoshi : CCalcIP
{
		
	public:
		
		CIPjoshi(){};
		
		double CalcJoshiHorizontal(double _k, double _h, double _mi, double _re, double _rw, double _L);
		double CalcJoshiAnisotropico(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff);
		
		~CIPjoshi(){};	
	
};

#endif
