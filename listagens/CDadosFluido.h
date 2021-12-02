#ifndef CDADOSFLUIDO_H_
#define CDADOSFLUIDO_H_


class CDadosFluido {
	
	protected:
		
	double mi, Bo;
	
	public:
		
		CDadosFluido(){};
		
		void Setmi(double _mi);
		void SetBo(double _Bo);
		double Getmi();
		double GetBo();		
		
		~CDadosFluido(){};
	 
	
};

#endif
