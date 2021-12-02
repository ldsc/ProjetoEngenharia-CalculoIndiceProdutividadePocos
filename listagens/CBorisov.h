#ifndef CBORISOV_H_
#define CBORISOV_H_

#include "CCalcIP.h"

class CBorisov : CCalcIP
{
			
	public:
		
		CBorisov(){};
		
		double CalcBorisov(double _k, double _h, double _mi, double _re, double _rw, double _L);
		
		~CBorisov(){};
		
};

#endif
