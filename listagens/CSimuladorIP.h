#ifndef CSIMULADOR_H_
#define CSIMULADOR_H_
#include <string>
#include <filesystem>

#include "CCalcIP.h"
#include "CFluido.h"
#include "CReservatorio.h"
#include "CReservatorioVertical.h"
#include "CPoco.h"
#include "CIPborisov.h"
#include "CIpgiger.h"
#include "CIPjoshi.h"
#include "CIPrenardDupuy.h"
#include "CIpshedid.h"
#include "CGnuplot.h"

class CSimuladorIP
{

	public:
		
		CFluido fluido;
		CReservatorio reservatorio;
		CReservatorioVertical reservatorioV;
		CPoco poco;
		CIPborisov borisov;
		CIPgiger giger;
		CIPjoshi joshi;
		CIPrenardDupuy dupuy;
		CIPshedid shedid;
		Gnuplot plot;
		
		CSimuladorIP(){};
		
		void EntradaDados();
		void Plot(std::vector <double> _plot, std::string NomeArquivo);
		void Executar();
		
		~CSimuladorIP(){};
};

#endif
