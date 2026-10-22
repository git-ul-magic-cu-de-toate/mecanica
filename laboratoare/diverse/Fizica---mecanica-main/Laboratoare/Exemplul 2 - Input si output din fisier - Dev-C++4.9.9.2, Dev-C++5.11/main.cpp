//  Citirea datelor dintr-un fisier si scrierea rezultatelor in alt fisier
//                 utilizand Dev-C++4.9.9.2 sau Dev-C++5.11
//           Copyright © 2021 - prof. dr. ing. Andrei Craifaleanu



//  Se citesc din fisierul "Exemplu.inp" valorile variabilelor reale a, b.
//  Se citeste valoarea variabile intreagi n.
//  Se calculeaza c = n*a + b.
//  Se scrie in fisierul "Exemplu.out" valoarea variabilei reale c.



          //  Includerea headerelor utilizate de program
#include <stdio.h>



          //  Functia "main"
int main()
{
          //  Declararea variabilelor
	float a, b, c;
	int n;
	FILE *finp,*fout;

          //  Deschiderea fisierului "Exemplu.inp",
          //  citirea datelor de intrare a, b, n
          //  si inchiderea fisierului "Exemplu.inp"
	finp = fopen("Exemplu.inp", "r");
	fscanf(finp, "%f %f", &a, &b);
	fscanf(finp, "%d", &n);
	fclose(finp);

          //  Calculul variabilei c
	c = n*a + b;
	
          //  Deschiderea fisierului "Exemplu.out",
          //  scrierea datelor de intrare a, b, n,
          //  precum si a rezultatului c
          //  si inchiderea fisierului "Exemplu.out"
	fout = fopen("Exemplu.out", "w");
	fprintf(fout, "a = %6.2f   b = %6.2f   n = %4d \n", a, b, n);
	fprintf(fout, "n*a + b = %6.3f \n",c);
	fprintf(fout, "\n");
	fclose(fout);
	return 0;
}
