//   Introducerea datelor de la tastatura si reprezentare grafica statica
//                utilizand Dev-C++5.11 - Console Application
//           Copyright © 2021 - prof. dr. ing. Andrei Craifaleanu



//  Se introduc de la tastatura:
//     - coordonatele xA, yA ale punctului A,
//     - coordonatele xB, yB ale punctului B,
//     - coordonatele xC, yC ale punctului C, precum si raza R.
//  Se deseneaza intr-o fereastra grafica segmentul AB,
//  precum si cercul de centru C si raza R.



          //  Includerea headerelor utilizate de program
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

          //  Functia "main"
int main()
{
          //  Declararea variabilelor
	float xA, yA, xB, yB, xC, yC, R;
		
          //  Introducerea datelor de intrare xA, yA, xB, yB, xC, yC, R
	printf("xA, yA = ");
	scanf("%f %f", &xA, &yA);
	printf("xB, yB = ");
	scanf("%f %f", &xB, &yB);
	printf("xC, yC, R = ");
	scanf("%f %f %f", &xC, &yC, &R);
	
          //  Ascunderea ferestrei consola
	HWND hWnd1 = GetConsoleWindow();
	ShowWindow( hWnd1, SW_HIDE );
	
          //  Deschiderea unei ferestre grafice
	initwindow(600,400);
	
          //  Scrierea unui text cu culoarea verde deschis
	setcolor(LIGHTGREEN);
    outtextxy(200, 50, "Drawing with line and circle");
	
          //  Desenarea segmentului AB cu linie de culoare alba si grosime 1.0
    setlinestyle(0,0,1);
	setcolor(WHITE);
	line(xA, yA, xB, yB);
	
          //  Desenarea cercului de centru C si raza R
          //  cu linie de culoare rosie si grosime 4.0
   setlinestyle(0,0,4);
	setcolor(LIGHTRED);
	circle(xC, yC, R);

          //  Oprirea executiei programului pana la apasarea unei taste oarecare
 	printf("   Press any key! \n");
 	while(!_kbhit()){}
	
          //  Inchiderea ferestrei grafice
 	closegraph();
	
          //  Afisarea ferestrei consola
	ShowWindow( hWnd1, SW_SHOW );
 	return 0;
}
