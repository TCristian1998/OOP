# Jocul lui Joseph



Acest cod contine implementarea jocului lui Joseph cu ajutorul unei liste circulare dublu inlantuite cu santinela.
Pentru aceasta a trebuit sa creez clasa nod pentru care am implementat contrcutori, constructorul de copiere si 
destructorul.
De asemenea, pentru a reusi sa implementez jocul am fost nevoit sa creez si clasa lista. Acestei liste o sa ii adaugam 
cate noduri vom dori. Deoarece este o lista dublu inlantuita putem sa o parcurgem in ce sens vrem(si in sensul acelor de ceas si invers)
Metodele implementate pentru clasa lista sunt(pe langa constructuri si destructori):

*afiseaza* = care afiseaza valorile nodurilor in sensul acelor de ceas la momentul apelarii

*afiseaza_invers* = care afiseaza valorile nodurilor in sensul acelor de ceas la momentul apelarii

*adauga_inceput* = aceasta metoda a fost supradefinita (am schimbat semnatura) deoarece putem adauga un nod 
		 deja creat sau putem adauga o valoarea, urmand sa construim nou nodul pe care sa il adaugam dupa nodul santinela

*adauga_final*  = acelasi principiu ca adauga_inceput numai ca de aceasta data se adauga inaintea nodului santinela

*stergere_curenta* = stergerea nodului cu numarul dat de parametru

*stergere_final* = stergerea nodului care se afla inaintea santinelei

*stergere_inceput* = stergerea nodului care se afla dupa santinela


Jocul lui Joseph este implementat in metoda *Stergere_Joseph*. Pentru aceasta am folosit doua noduri suplimentare: 
- unu care retine pozitia curenta altu care se plimba in lista pentru a ajunge la nodul care trebuie sters.
