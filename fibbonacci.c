#include<stdio.h>

int main(void)
{
    int n1=0, n2=1, n3, n;
    printf("Enter the number ");
    scanf("%d", &n);

    printf("Fibbonacci series: %d, %d", n1, n2);
    for(int i=2;i<n;i++)
    {
        n3 = n2 + n1;
        printf(", %d", n3);
        n1= n2;
        n2= n3;
    }



    return 0;
}