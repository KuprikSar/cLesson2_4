#include <stdio.h>

int cnk(int n, int k)
{
 int res = 1;
    for (int i=n-k+1; i<=n; ++i)
        res *= i;
    for (int i=2; i<=k; ++i)
        res /= i;
    return res;
}

int cnk2(int n, int k) 
{
    double res = 1;
    for (int i=1; i<=k; ++i)
    res = res * (n-k+i) /
    i;
    return (int) (res + 0.01);
}

long long binomialCoefficient(int n, int k) 
{
    if (k == 0 || k == n) 
    {
        return 1;
    } 
    else 
    {
        long long result = 1;
        for (int i = 1; i <= k; ++i) 
        {
            result *= (n - i + 1);
            result /= i;
        }
        return result;
    }
}

int main()
{
    int a,b;
    //scanf ("%d%d",&a,&b);
    //printf ("%d\n%d", cnk(a,b), cnk2(a, b));

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("\nEnter Second Number: ");
    scanf("%d", &b);

    // Output the binomial coefficients using the improved function
    printf("Binomial Coefficient: %lld\n", binomialCoefficient(a, b));

    return 0;
}