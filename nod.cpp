#include"nod.h"
nod::~nod(){
	std::cout<<"Sunt un destructor"<<"\n";
	this->urmator = NULL;
	this->precedent = NULL;
	delete this->urmator;
	delete this->precedent;
}
nod::nod(){
	this->data=0;
	this->urmator=this;
	this->precedent=this;
}
nod::nod(int x){
	this->data=x;
	this->urmator=this;
	this->precedent=this;
}
int nod::get_data(){
	 return this->data;
}
int nod::get_urmator(){
	 return this->urmator->data;
}
int nod::get_precedent(){
	 return this->precedent->data;
}
void nod::modifica_urmator(nod *x){
	 this->urmator=x;
	 x->precedent=this;
}
void nod::modifica_precedent(nod *x){
	 this->precedent=x;
	 x->urmator=this;
}
