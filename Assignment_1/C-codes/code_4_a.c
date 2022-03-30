#include<stdio.h>

int main()
{
    float K;
    scanf("%f", &K);
    float LHS, RHS;
    LHS = (K + 3)/(K + 2);
    RHS = ((3*K) - 7)/((2*K) - 3);

    if(LHS == RHS) printf("1"); // 1 means verified and value of 'K' is correct
    else printf("0"); // 0 means value of 'K' is wrong

    return 0;
}