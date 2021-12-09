#ifndef CIPBORISOV_H_
#define CIPBORISOV_H_

#include "CCalcIP.h"

class CIPborisov : CCalcIP
{
			
	public:
		
		CIPborisov(){};
		
		double CalcBorisov(double _k, double _h, double _mi, double _re, double _rw, double _L);
		
		~CIPborisov(){};
		
};

#endif
