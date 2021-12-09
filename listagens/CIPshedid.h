#ifndef CIPSHEDID_H
#define CIPSHEDID_H

#include "CCalcIP.h"

class CIPshedid : CCalcIP
{
	
	public:
		
		CIPshedid(){};
		
		double CalcShedid(double _k, double _h, double _mi, double _re, double _rw, double _L, double _Bo);
		
		~CIPshedid(){};
		
};

#endif
