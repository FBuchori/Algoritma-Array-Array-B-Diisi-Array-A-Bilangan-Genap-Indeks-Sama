#include <stdio.h>
using namespace std;

int main (void)
{
    int a[5]={5,10,6,0,4};
    int b[5];
    int i=0, j=0;
    printf("Nilai Array A\n");
    for (i=4; i>=0; i--)
    {
        b[i]=a[j];
        printf("%d",a[j]);
        j++;
    }
    printf("\n");
    printf("Nilai Array B (bilangan genap indeks sama):\n");
    for (i=4; i>=0; i--)
        if (b[i]%2==0 && b[i]>0)
    {printf("%2i",b[i]);}
    for (i=0; i>0; i++)
    {
        printf("%2i",b[i]);
    }
}
