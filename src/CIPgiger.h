#ifndef CIPGIGER_H_
#define CIPGIGER_H_

#include "CCalcIP.h"

class CIPgiger : CCalcIP
{

	
	public:
		
		CIPgiger(){};
		
		double CalcGiger(double _k, double _h, double _mi, double _re, double _rw, double _L);
		
		~CIPgiger(){};
	
	
};

#endif
