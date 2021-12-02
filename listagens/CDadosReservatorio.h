#ifndef CDADOSRESERVATORIO_H_
#define CDADOSRESERVATORIO_H_

class CDadosReservatorio {
	
	protected:
		
		double k, re, h, L;
		
	public:
	
	CDadosReservatorio(){};
	
	void SetK (double _k);
	void SetRe (double _re);
	void SetH (double _h);
	void SetL (double _L);
	double GetK();
	double GetRe();
	double GetH();
	double GetL();
	
	~CDadosReservatorio(){};
		
};



#endif
