#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,k;
    float Aa,xa,ya;    //aria, respectiv coordonatele centrului, calculate analitic
    float An=0,xn,yn;  //aria, respectiv coordonatele centrului, calculate numeric
    int be=600,he=400; // dimensiunile ferestrei grafice, in pixeli
    int i,n;

//      Citirea datelor de intrare

    printf("Baza si inaltimea placii = ");
    scanf(" %f, %f",&a,&b);
    printf("Nr. pasi =");
    scanf(" %d",&n);
    printf("Factor de scara =");
    scanf(" %f",&k);

//      Calcul analitic

    Aa = 2 * a * b / 3;
    xa = 3 * a / 5;
    ya = 3 * b / 8;

//      Calcul numeric si desen

    float xi, xi1, yi, yi1, Ai_1, Ai_2, xi_1, yi_1, xi_2, yi_2;
    float Sxn = 0, Syn = 0;
    //initwindow(be,he);
    for (i=0;i<n;i++)
    {
        xi = i * a / n;
        xi1 = (i + 1) * a / n;
        yi = sqrt(b * b * xi / a);
        yi1 = sqrt(b * b * xi1 / a);
        Ai_1 = yi * (xi1 - xi) / 2;
        Ai_2 = yi1 * (xi1 - xi) / 2;
        xi_1 = (2 * xi + xi1) /3 ;
        yi_1 = yi / 3;
        xi_2 = (2 * xi1 + xi) /3;
        yi_2 = (yi + yi1) / 3;
        An +=  Ai_1 + Ai_2;
        Sxn += Ai_1 * xi_1 + Ai_2 * xi_2;
        Syn += Ai_1 * yi_1 + Ai_2 * yi_2;
//        line(xB*k+be/2,he/2-yB*k,xD*k+be/2,he/2-yD*k);
//        line(xD*k+be/2,he/2-yD*k,xE*k+be/2,he/2-yE*k);
//        line(xE*k+be/2,he/2-yE*k,xB*k+be/2,he/2-yB*k);
    }
    xn = Sxn / An;
    yn = Syn / An;

    //setcolor(YELLOW);
    //setlinestyle(SOLID_LINE , 1, 4);
//    circle(xn*k+be/2,he/2-yn*k,4);

//      Afisarea rezultatelor

    printf("\n");
    printf("Analitic:  A = %6.3f, xC = %6.3f, yC = %6.3f \n",Aa,xa,ya);
    printf("Numeric :  A = %6.3f, xC = %6.3f, yC = %6.3f \n",An,xn,yn);

    printf("\n");
	printf("   Press any key! \n");
    while (!kbhit()){};
    return 0;
}
