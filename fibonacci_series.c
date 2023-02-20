//fibonacci series upto n using recursive function
#include <stdio.h>
int fibo(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return (fibo(n-1) + fibo (n-2));
    }
}
int main()
{
    int num;
    printf("Enter the number of terms:\n");
    scanf("%d",&num);
    printf("The fibonacci series upto %dth term is:\n", num);
    for (int i=0;i<num;i++)
    {
        printf("%d\t",fibo(i));
    }
    return 1;
}
