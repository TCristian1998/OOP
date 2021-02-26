#include<iostream>
class nod{
	int data;
	
	public:
		nod * precedent;
		nod * urmator;
		int get_data();
		int get_urmator();
		int get_precedent();
		void modifica_urmator(nod *);
		nod();
		~nod();
		void modifica_precedent(nod *);
		nod(int x);
};



