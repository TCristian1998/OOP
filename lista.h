#include "nod.h"
class lista{
	nod* santinela;
	int lungime;
	public:
		lista();
		~lista();
		lista(const lista &);
		void afiseaza();
		void afiseaza_invers();
		void adauga_inceput(nod *);
		void adauga_inceput(int );
		void adauga_final(int);
		void adauga_final(nod *);
		void stergere_final();
		void stergere_inceput();
		void stergere_curenta(int );
		int get_lungime();
		lista& operator=(const lista &);
		void stergere_joseph(int , int);
};
