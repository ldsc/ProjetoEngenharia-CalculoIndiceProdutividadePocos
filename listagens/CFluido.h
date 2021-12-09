#ifndef CFLUIDO_H_
#define CFLUIDO_H_


class CFluido {
	
	protected:
		
	double mi, Bo;
	
	public:
		
		CFluido(){};
		
		void Setmi(double _mi);
		void SetBo(double _Bo);
		double Getmi();
		double GetBo();		
		
		~CFluido(){};
	 
	
};

#endif
