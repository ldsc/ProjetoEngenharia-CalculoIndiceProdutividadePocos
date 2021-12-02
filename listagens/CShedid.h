#ifndef CSHEDID_H
#define CSHEDID_H

#include "CCalcIP.h"

class CShedid : CCalcIP
{
	
	public:
		
		CShedid(){};
		
		double CalcShedid(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Bo);
		
		~CShedid(){};
		
};

#endif
