//                       Reprezentare grafica statica
//              utilizand Dev-C++4.9.9.2 - Console Application
//           Copyright © 2021 - prof. dr. ing. Andrei Craifaleanu



//  Se deseneaza intr-o fereastra grafica un segment de dreapta si un cerc.



          //  Includerea headerelor utilizate de program
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

          //  Functia "main"
int main()
{
          //  Declararea variabilelor
	int xA, yA, xB, yB, xC, yC, R;
	
          //  Deschiderea unei ferestre grafice
	initwindow(600,400);
	
          //  Scrierea unui text cu culoarea verde deschis
	setcolor(LIGHTGREEN);
    outtextxy(200, 50, "Drawing with line and circle");
	
          //  Desenarea segmentului AB cu linie de culoare alba si grosime 1.0
    xA = 100;
    yA = 100;
    xB = 200;
    yB = 300;
    setlinestyle(0, 0, 1);
	setcolor(WHITE);
	line(xA, yA, xB, yB);
	
          //  Desenarea cercului de centru C si raza R
          //  cu linie de culoare rosie si grosime 4.0
    xC = 400;
    yC = 200;
    R = 100;
    setlinestyle(0, 0, 4);
	setcolor(LIGHTRED);
	circle(xC, yC, R);
  
          //  Oprirea executiei programului pana la apasarea unei taste oarecare
 	printf("   Press any key! \n");
 	while(!_kbhit()){}
	
          //  Inchiderea ferestrei grafice
 	closegraph();
 	return 0;
}
