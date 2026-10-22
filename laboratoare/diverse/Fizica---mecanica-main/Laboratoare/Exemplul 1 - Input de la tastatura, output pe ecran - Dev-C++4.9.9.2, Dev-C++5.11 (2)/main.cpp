//  Introducerea datelor de la tastatura si afisarea rezultatelor pe ecran
//                 utilizand Dev-C++4.9.9.2 sau Dev-C++5.11
//           Copyright © 2021 - prof. dr. ing. Andrei Craifaleanu



//  Se introduc de la tastatura valorile variabilelor reale a, b.
//  Se introduce valoarea variabilei intreagi n.
//  Se calculeaza c = n*a + b.
//  Se afiseaza pe ecran valoarea variabilei reale c.



          //  Includerea headerelor utilizate de program
#include <stdio.h>
#include <conio.h>



          //  Functia "main"
int main()
{
          //  Declararea variabilelor
	float a, b, c;
	int n;

          //  Introducerea datelor de intrare a, b, n
	printf("a, b = ");
	scanf("%f %f", &a, &b);
	printf("n = ");
	scanf("%d", &n);
	printf("\n");

          //  Calculul variabilei c
	c = n*a + b;

          //  Afisarea pe ecran a datelor de intrare a, b, n,
          //  precum si a rezultatului c
	printf("a = %6.2f,   b = %6.2f,   n = %4d \n", a, b, n);
	printf("n*a + b = %6.3f \n", c);
	printf("\n");

          //  Oprirea executiei programului pana la apasarea unei taste oarecare
	printf("   Press any key! \n");
	while(!_kbhit()){}
	return 0;
}
