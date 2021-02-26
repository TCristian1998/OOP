#include"lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	nod x(47),*a,*c,*d,*e;
	int f,g;
	std::cout<<"Scrie de la ce pozitie \n";
	std::cin>>g;
	std::cout<<"Scrie din cati in cati \n";
	std::cin>>f;
	lista l;
	a=new nod(434);
	c=new nod(78);
	d=new nod(90);
	e=new nod(324);
	l.adauga_inceput(a);
	l.adauga_inceput(c);
	l.adauga_final(d);
	l.adauga_inceput(435);
	l.adauga_final(435);
	l.adauga_inceput(5);
	l.adauga_final(700);
	l.adauga_inceput(234);
	l.adauga_inceput(57);
	int i=f;
	int r=0;
	int n=l.get_lungime();
	l.afiseaza_invers();
	l.stergere_joseph(f,g);
//	lista b;
//	b=l;
//	b.afiseaza();
//	std::cout<<"\n";
//	l.afiseaza();
}
