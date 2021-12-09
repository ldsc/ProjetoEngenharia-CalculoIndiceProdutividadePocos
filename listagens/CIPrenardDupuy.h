#ifndef CIPRENARDDUPUY_H_
#define CIPRENARDDUPUY_H_

#include "CCalcIP.h"

class CIPrenardDupuy : CCalcIP
{
		
	public:
		
		CIPrenardDupuy(){};
		
		double CalcRenardDupuy(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff);
		
		~CIPrenardDupuy(){};
		
};

#endif
