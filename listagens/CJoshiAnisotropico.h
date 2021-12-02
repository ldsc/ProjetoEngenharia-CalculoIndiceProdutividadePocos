#ifndef CJOSHANISOTROPICO_H_
#define CJOSHANISOTROPICO_H_

#include "CJoshi.h"

class CJoshiAnisotropico : CCalcIP
{
			
	public:
		
	CJoshiAnisotropico(){};
		
	double CalcJoshi(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff);
		
	~CJoshiAnisotropico(){};
	
};

#endif
