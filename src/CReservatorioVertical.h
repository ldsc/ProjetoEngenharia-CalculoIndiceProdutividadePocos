#ifndef CRESERVATORIOVERTICAL_H_
#define CRESERVATORIOVERTICAL_H_

#include "CReservatorio.h"

class CReservatorioVertical : CReservatorio
{

	protected:
	
		double Kv;
		
	public:
		
		CReservatorioVertical(){};
		
		void SetKv(double _Kv);
		double GetKv();
		
		
		~CReservatorioVertical(){};

	
};

#endif
