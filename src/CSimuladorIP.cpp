#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <dirent.h>

#include "CSimuladorIP.h"

using namespace std;

void CSimuladorIP::EntradaDados()
{
	
	cout << "#############################################################################" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#                          Importacao de dados                              #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#############################################################################" << endl << endl;
	
	cout << "Digite nome do arquivo de dados." <<endl;
	
	bool errado = true;
	
	string path = ".";

	cout << "\nArquivos Disponiveis\n" << endl;
	
    for (const auto & file : filesystem::directory_iterator(path))
        cout << file.path() << endl;
		
	cout << endl;
	
	do
	{
	string nomeArquivo;
		
	cin.get();
	getline (cin, nomeArquivo);
    
	//nomeArquivo="Src/"+nomeArquivo;
	  	 	
	ifstream in;
	
	in.open(nomeArquivo, fstream::in);                    
	
	double tmp;
 	
	in >> tmp;
	reservatorioV.SetKv(tmp);
	in >> tmp;
	poco.SetRw(tmp);
	in >> tmp;
	reservatorio.SetRe(tmp);
	in >> tmp;
	reservatorio.SetL(tmp);
	in >> tmp;
	reservatorio.SetK(tmp);
	in >> tmp;
	reservatorio.SetH(tmp);
	in >> tmp;
	fluido.Setmi(tmp);
	in >> tmp;
	fluido.SetBo(tmp);
	
	in.close();
	
	cout << "\n######################################################################################################################" << endl;
	cout << "#                                                                                                                    #" << endl;
	cout << "#                                      Dados estao corretos? 1 -sim  | 2- nao                                        #" << endl;
	cout << "#   " << "Kh = " << reservatorio.GetK() << " | Rw = " << poco.GetRw() << " | Re = " << reservatorio.GetRe() << " | L = " << reservatorio.GetL() << " | Kv = " << reservatorioV.GetKv() << " | H = " << reservatorio.GetH() << " | mi = " << fluido.Getmi() << " | Bo = " << fluido.GetBo() << "            #" << endl;
	cout << "#                                                                                                                    #" << endl;
	cout << "######################################################################################################################" << endl << endl;
	
	cin >> tmp;
	
	bool tst =true;
	
	do
	if (tmp == 1)
	{
	errado = false;
	tst = false;
	}
	else if (tmp == 2)
	{
	errado = true;
	tst = false;
	cout << "\n#############################################################################" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#                          Importacao de dados                              #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#############################################################################" << endl << endl;
	
	cout << "Digite nome do arquivo de dados." <<endl;
	}
	else
	{
	cout << "opcao invalida!!!" <<endl;
	cout << "\n######################################################################################################################" << endl;
	cout << "#                                                                                                                    #" << endl;
	cout << "#                                      Dados estao corretos? 1 -sim  | 2- nao                                        #" << endl;
	cout << "#  " << "Kh = " << reservatorio.GetK() << " | Rw = " << poco.GetRw() << " | Re = " << reservatorio.GetRe() << " | L = " << reservatorio.GetL() << " | Kv = " << reservatorioV.GetKv() << " | H = " << reservatorio.GetH() << " | mi = " << fluido.Getmi() << " | Bo = " << fluido.GetBo() << "           #" << endl;
	cout << "#                                                                                                                    #" << endl;
	cout << "######################################################################################################################" << endl << endl;
	cin >> tmp;
 	}
 	while(tst);
	}
	while(errado);
	
}

void CSimuladorIP::Plot(vector <double> _plot, string NomeArquivo)
{
	
	
	cout << "\n#############################################################################" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#                            Plotando Graficos                              #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#############################################################################" << endl << endl;
	
	Gnuplot::Terminal("qt");	
		
	plot.set_xlabel("Modelo");
	plot.set_ylabel("IP");
	plot.set_xrange(-1 , 6);
	plot.Title("Indice de Produtividade");
	plot.cmd("unset xtics");
	plot.Cmd("set xtics(\"Borisov\" 0, \"Joshi\" 1, \"Joshi Anisotrópico\" 2, \"Giger\" 3, \"RenardDupuy\" 4, \"Shedid\" 5)");
	plot.Cmd("set boxwidth 0.5");
	plot.Cmd("set style fill solid 0.5");
	plot.set_style("histograms");
	
	plot.ShowOnScreen();
		
	plot.plot_x(_plot);
	plot.savetops(NomeArquivo);	
	cout << "Aperte Enter para continuar ..." << endl;
  	cin.get();
}

void CSimuladorIP::Executar()
{
	
	cout << "\n#############################################################################" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#    Projeto Programacao Pratica - Calculo Indice de produtividade          #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "# Professor: Andre Duarte Bueno                                             #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#    Alunos: Carolina Bastos                                                #" << endl;
	cout << "#            Douglas Ribeiro                                                #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#############################################################################" << endl << endl;
	
	cout << "Gostaria de executar o programa? 1 - Sim | 0 - nao" << endl;
	
	int opt;
	bool tst=true;
	
	cin >> opt;
		
	do
	if (opt!=1 && opt!=0)
	{
	cout << "opcao invalida\n" << endl;
	cout << "Gostaria de executar o programa? 1 - Sim | 0 - nao" << endl;
	cin >> opt;
	}
	else
	tst=false;
	while(tst);
	
	while (opt==1)
	{
		EntradaDados();	
		
	cout << "\n#############################################################################" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#             Qual nome do arquivo de saida de dados?                       #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#############################################################################" << endl << endl;
		
		
		string arquivoSaida;
		
		cin.get();
		getline(cin, arquivoSaida);
		
		arquivoSaida = "Src/Saida/"+arquivoSaida;
		
		ofstream out;
		out.open(arquivoSaida, fstream::out);
		
		double BORISOV = borisov.CalcBorisov(reservatorio.GetK(), reservatorio.GetH(), fluido.Getmi(), reservatorio.GetRe(), poco.GetRw(), reservatorio.GetL());
		double JOSHI = joshi.CalcJoshiHorizontal(reservatorio.GetK(), reservatorio.GetH(), fluido.Getmi(), reservatorio.GetRe(), poco.GetRw(), reservatorio.GetL());
		double keff = sqrt(reservatorio.GetK()/reservatorioV.GetKv());
		double JOSHIANISIO = joshi.CalcJoshiAnisotropico(reservatorio.GetK(), reservatorio.GetH(), fluido.Getmi(), reservatorio.GetRe(), poco.GetRw(), reservatorio.GetL(), keff);
		double GIGER = giger.CalcGiger(reservatorio.GetK(), reservatorio.GetH(), fluido.Getmi(), reservatorio.GetRe(), poco.GetRw(), reservatorio.GetL());
		double DUPUY = dupuy.CalcRenardDupuy(reservatorio.GetK(), reservatorio.GetH(), fluido.Getmi(), reservatorio.GetRe(), poco.GetRw(), reservatorio.GetL(), keff);
		double SHEDID = shedid.CalcShedid(reservatorio.GetK(), reservatorio.GetH(), fluido.Getmi(), reservatorio.GetRe(), poco.GetRw(), reservatorio.GetL(), fluido.GetBo());
		
		vector <double> _plot;
		
		_plot.push_back(BORISOV);
		_plot.push_back(JOSHI);
		_plot.push_back(JOSHIANISIO);
		_plot.push_back(GIGER);
		_plot.push_back(DUPUY);
		_plot.push_back(SHEDID);
		
		
		out << "#Borisov Joshi JoshiVertical Giger RenardDupuy Shedid" << endl;
		out << BORISOV << " " << JOSHI << " " << JOSHIANISIO << " " << GIGER << " " << DUPUY << " " << SHEDID;
		
	cout << "\n#############################################################################" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#                              Dados Salvos!                                #" << endl;
	cout << "#                                                                           #" << endl;
	cout << "#############################################################################" << endl << endl;
		
	
	cout << "Entre com come do arquivo de imagem:\n" << endl;
	
	string _nomeArquivo;
		
	cin.get();
	getline (cin, _nomeArquivo);
		
		Plot(_plot, _nomeArquivo);
		
		out.close();
		
		cout << "Gostaria de executar o programa? 1 - Sim | 0 - nao" << endl;
		cin >> opt;
	
	tst = true;
	
	do
	if (opt!=1 && opt!=0)
	{
	cout << "opcao invalida\n" << endl;
	cout << "Gostaria de executar o programa? 1 - Sim | 0 - nao" << endl;
	cin >> opt;
	}
	else
	tst=false;
	while(tst);
	}
	
	
}
