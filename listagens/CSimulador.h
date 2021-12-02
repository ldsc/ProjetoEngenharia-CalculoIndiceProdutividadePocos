#ifndef CSIMULADOR_H_
#define CSIMULADOR_H_
#include <string>
#include <filesystem>

#include "CCalcIP.h"
#include "CDadosFluido.h"
#include "CDadosReservatorio.h"
#include "CDadosReservatorioVertical.h"
#include "CDadosPoco.h"
#include "CBorisov.h"
#include "CGiger.h"
#include "CJoshi.h"
#include "CRenardDupuy.h"
#include "CShedid.h"
#include "CGnuplot.h"

class CSimulador
{

	public:
		
		CDadosFluido fluido;
		CDadosReservatorio reservatorio;
		CDadosReservatorioVertical reservatorioV;
		CDadosPoco poco;
		CBorisov borisov;
		CGiger giger;
		CJoshi joshi;
		CRenardDupuy dupuy;
		CShedid shedid;
		Gnuplot plot;
		
		CSimulador(){};
		
		void EntradaDados();
		void Plot(std::vector <double> _plot);
		void Executar();
		
		~CSimulador(){};
};

#endif
