#ifndef CGIGER_H_
#define CGIGER_H_

#include "CCalcIP.h"

class CGiger : CCalcIP
{

	
	public:
		
		CGiger(){};
		
		double CalcGiger(double _k, double _h, double _mi, double _re, double _rw, double _L);
		
		~CGiger(){};
	
	
};

#endif
