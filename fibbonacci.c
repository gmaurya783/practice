#include<stdio.h>

void print_Fibb(int);
void print_Fibb_recur(int);

void print_Fibb(int n)
{
    int n1=0, n2=1, n3;
    printf("Fibbonacci series: %d, %d", n1, n2);
    for(int i=2;i<n;i++)
    {
        n3 = n2 + n1;
        printf(", %d", n3);
        n1= n2;
        n2= n3;
    }
}

void print_Fibb_recur(int n)
{
    static int n1= 0, n2= 1, n3;
    if(n==0)
    {
        printf("\nFibbonacci series by recursion: %d, %d", n1, n2);
    }
    else
    {
        print_Fibb_recur(n-1);
        n3 = n2+n1;
        n1 = n2;
        n2= n3;
        printf(", %d", n3);
    }
}

int main(void)
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    print_Fibb(n);
    print_Fibb_recur(n-2);
    return 0;
}