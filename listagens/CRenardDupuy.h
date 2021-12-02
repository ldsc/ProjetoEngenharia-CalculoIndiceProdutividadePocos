#ifndef CRENARDDUPUY_H_
#define CRENARDDUPUY_H_

#include "CCalcIP.h"

class CRenardDupuy : CCalcIP
{
		
	public:
		
		CRenardDupuy(){};
		
		double CalcRenardDupuy(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Keff);
		
		~CRenardDupuy(){};
		
};

#endif
