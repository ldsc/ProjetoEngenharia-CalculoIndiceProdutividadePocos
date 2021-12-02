#ifndef CJOSHI_H_
#define CJOSHI_H_

#include "CCalcIP.h"

class CJoshi : CCalcIP
{
		
	public:
		
		CJoshi(){};
		
		double CalcJoshiHorizontal(double _k, double _h, double _mi, double _re, double _rw, double _L);
		double CalcJoshiAnisotropico(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff);
		
		~CJoshi(){};	
	
};

#endif
