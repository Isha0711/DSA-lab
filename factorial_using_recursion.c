#include <stdio.h>
int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else {
        return (n * fact(n-1));
    }
}
int main()
{
    int num,f;
    printf("Enter a number:\n");
    scanf("%d",&num);
    f=fact(num);
    printf("The factorial of %d is %d\n", num, f);
    return 1;
}
