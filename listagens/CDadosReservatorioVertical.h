#ifndef CCDADOSRESERVATORIOVERTICAL_H_
#define CCDADOSRESERVATORIOVERTICAL_H_

#include "CDadosReservatorio.h"

class CDadosReservatorioVertical : CDadosReservatorio
{

	protected:
	
		double Kv;
		
	public:
		
		CDadosReservatorioVertical(){};
		
		void SetKv(double _Kv);
		double GetKv();
		
		
		~CDadosReservatorioVertical(){};

	
};

#endif
