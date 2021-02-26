#include "lista.h"
lista::lista(){
	santinela = new nod(1979);
	this->lungime = 0;
	santinela->modifica_urmator(santinela);
}
lista::~lista(){
		/*while (this->santinela) {
		nod* a;
		a = this->santinela->urmator;
		this->santinela->precedent->urmator = NULL;
		delete this->santinela;
		this->lungime = this->lungime - 1;
		this->santinela = a;
		a = NULL;
	    delete a;
	}*/
	delete santinela;
}
lista& lista::operator=(const lista &a){
	santinela=new nod(1979);
	nod* b;
	b = new nod();
	b = a.santinela;
	this->afiseaza();
	while(b->urmator->get_data() != 1979){
		b = b->urmator;
		this->adauga_final(b->get_data());
	}
//	b = NULL;
	delete b;
	return *this;
}
lista::lista(const lista &a){
	santinela = new nod(1979);
	nod* b;
	b = new nod();
	b = a.santinela;
	this->afiseaza();
	while(b->urmator->get_data() != 1979){
		b=b->urmator;
		this->adauga_final(b->get_data());
	}
	this->afiseaza();
}
void lista::afiseaza() {
	std::cout << "incepe lista ";
	nod* a;
	a = new nod();
	a = santinela;
	while(a->urmator->get_data() != 1979 ){
		a = a->urmator;
		std::cout<<a->get_data() << "\n";
	}
	a = NULL;
	delete a;
}
void lista::afiseaza_invers(){
	std::cout << "lista invers: ";
	nod *q;
	q = new nod();
	q = santinela; 
	while(q->precedent->get_data() != 1979) {
		q = q->precedent;
		std::cout<<q->get_data()<<"\n";
	}	
	q = NULL;
	delete q;
} 
void lista::adauga_inceput(nod *a){
	santinela->urmator->precedent = a;
	a->urmator = santinela->urmator;
	santinela->modifica_urmator(a);
	this->lungime = this->lungime+1;
}
void lista::adauga_inceput(int i){
	nod *a = new nod(i);
	santinela->urmator->precedent = a;
	a->urmator = santinela->urmator;
	santinela->modifica_urmator(a);
	this->lungime = this->lungime+1;
	a = NULL;
	delete a;
}
void lista::adauga_final(nod *a){
	santinela->precedent->urmator = a;
	a->precedent = santinela->precedent;
	santinela->modifica_precedent(a);
	this->lungime = this->lungime+1;
	a = NULL;
	delete a;
}
void lista::adauga_final(int i){
	nod *a=new nod(i);
	santinela->precedent->urmator = a;
	a->precedent = santinela->precedent;
	santinela->modifica_precedent(a);
	this->lungime = this->lungime+1;
	a = NULL;
	delete a;
}
void lista::stergere_inceput(){
	santinela->urmator = santinela->urmator->urmator;
	santinela->urmator->precedent = santinela;
	this->lungime = this->lungime-1;
}

void lista::stergere_final(){
	santinela->precedent = santinela->precedent->precedent;
	santinela->precedent->urmator = santinela;
	this->lungime = this->lungime-1;
}
void lista::stergere_curenta(int i){
	nod* a;
	a = new nod();
	a = santinela;
	while(i != 0) {
		a = a->urmator;
		i --;
		if(a->get_data() == 1979) a = a->urmator;
	}
	a->precedent->urmator = a->urmator;
	a->urmator->precedent = a->precedent;
	a = NULL;
	delete a;
	this->lungime = this->lungime-1;
	
}
int lista::get_lungime(){
	return this->lungime;
}
void lista::stergere_joseph(int m, int n){
	int i = 1;
	nod *a, *b;
	a = new nod();
	a = santinela;
	b = new nod();
	int c = n;
	while(c > 0){
		a = a->urmator;
		c --;
	}
	b = a->precedent;
	stergere_curenta(n);
	while(this->lungime > 0){
		i = 0;
		a = b;
		c = m;
		while(c > 0){
			a = a->urmator;
			if(a->get_data() == 1979) a = a->urmator;
			c --;
		}
		b = a->precedent;
		a -> precedent -> urmator = a ->urmator;
		a -> urmator-> precedent = a ->precedent;
		lungime --; 
	}
	std::cout<<"\n"<<a->get_data();
	a = NULL;
	b = NULL;
	delete a;
	delete b;
}

