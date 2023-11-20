#include <stdio.h>
#include <windows.h>
int main(int argc, char* argv[])
{
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    printf("Operatory arytmetyczne dwuargumentowe - przykłady użycia\n");
    printf("%f\n", 1/2);
    printf("%f\n",1./2);
    printf("%f\n",1/2.);
    printf("%f\n",7/2);
    printf("%f\n",7./2);
    printf("%f\n",7%2);
// printf("%f\n",7.%2);
    printf("%f\n",1./0);
    printf("%f\n",1/0.);
    printf("%f\n",-1/0.);
    printf("%f\n",0./0);
    printf("%f\n",0./0.);
// printf("%d\n",0/0);
    fflush(stdin);
    getchar();
    return 0;
}