#ifndef CRESERVATORIO_H_
#define CRESERVATORIO_H_

class CReservatorio {
	
	protected:
		
		double k, re, h, L;
		
	public:
	
	CReservatorio(){};
	
	void SetK (double _k);
	void SetRe (double _re);
	void SetH (double _h);
	void SetL (double _L);
	double GetK();
	double GetRe();
	double GetH();
	double GetL();
	
	~CReservatorio(){};
		
};



#endif
