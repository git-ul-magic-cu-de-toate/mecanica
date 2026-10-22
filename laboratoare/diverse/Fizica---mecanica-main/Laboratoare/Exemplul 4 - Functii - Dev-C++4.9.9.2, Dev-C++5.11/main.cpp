//                      Functii definite de utilizator
//                 utilizand Dev-C++4.9.9.2 sau Dev-C++5.11
//           Copyright © 2021 - prof. dr. ing. Andrei Craifaleanu



//  Pasul 1:
//     - se introduc de la tastatura valoarea variabilei reale a,
//       precum si cea a variabilei intreagi m;
//     - se calculeaza b = m*a, utilizand functia "Compute";
//     - se afiseaza pe ecran valoarea variabilei reale b.
//  Pasul 2:
//     - se introduc de la tastatura valoarea variabilei reale c,
//       precum si cea a variabilei intreagi n;
//     - se calculeaza d = n*c, utilizand functia "Compute";
//     - se afiseaza pe ecran valoarea variabilei reale d.

//  Functia "Compute" determina, de asemenea, numarul pasului curent,
//  prin incrementarea valorii intregi i (care a fost initializata la 0).

//  Parametrii m, a, n, c, sunt transmisi functiei "Compute" prin valoare,
//  deoarece valorile lor nu sunt modificate de catre functie,
//  iar parametrul i este transmis prin referinta,
//  deoarece valoarea sa este modificata de catre functie.



          //  Includerea headerelor utilizate de program
#include <stdio.h>
#include <conio.h>



          //  Functia "Compute"
float Compute(float x, int k, int *i)
{
    float z;
    z = x*k;
    *i = *i +1 ;
    return z;
}



          //  Functia "main"
int main()
{
          //  Declararea variabilelor
	float a, b, c, d;
	int i = 0, m, n;


          //  Inceputul pasului 1
          
          //  Introducerea datelor de intrare a, m
	printf("a, m = ");
	scanf("%f %d", &a, &m);
	
          //  Prima apelarea a functiei "Compute"
	b = Compute(a, m, &i);
	
          //  Afisarea pe ecran a numarului pasului curent (1),
          //  a datelor de intrare a, m si a rezultatului b
    printf("    Pasul %2d \n", i);
	printf("a = %6.2f   m = %4d;   m*a = %6.3f \n", a, m, b);
	printf("\n");


          //  Inceputul pasului 2
          
          //  Introducerea datelor de intrare c, n
	printf("c, n = ");
	scanf("%f %d", &c, &n);

          //  A doua apelarea a functiei "Compute"
	d = Compute(c, n, &i);
	
          //  Afisarea pe ecran a numarului pasului curent (2),
          //  a datelor de intrare c, n si a rezultatului d
	printf("    Pasul %2d \n", i);
	printf("c = %6.2f   n = %4d;   n*c = %6.3f \n", c, n, d);
	printf("\n");

          //  Oprirea executiei programului pana la apasarea unei taste oarecare
	printf("   Press any key! \n");
	while(!_kbhit()){}
}
