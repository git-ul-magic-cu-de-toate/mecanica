#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, H = 0, V = 0, N = 0, EPS = 0, xA;
    float Fx, Fy;
    int i,n,m;

//      Introducerea fortelor

    printf("xA = ");
    scanf("%f", &xA);

    printf("n = ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        printf("%d) Fx, Fy, x, y = ", i);
        scanf(" %f, %f, %f, %f", &Fx, &Fy, &x, &y);

        H -= Fx;
        N += Fx * y - Fy * x;
        V -= Fx * y + Fy * (xA - x);
        EPS += Fy;
    }

    float M = 0;

    printf("m = ", &m);
    scanf("%d", &m);
    for(i = 1; i <= m; i++) {
          printf("%d) M = ", i);
          scanf("%f", &M);
          N -= M;
          V += M;

    }
    N = N / xA;
    V = V / xA;
    EPS += V + N;

//      Afisarea rezultatelor

    printf("\n");
    printf("H = %f, N = %f, V = %f, EPS = %.12f", H, N, V, EPS);
    printf("\n");
	printf("   Press any key! \n");
    while (!kbhit()){};
    return 0;
}
