#include<stdio.h>

int check(float K)
{
    float LHS, RHS;
    LHS = (K + 3)/(K + 2);
    RHS = ((3*K) - 7)/((2*K) - 3);

    if(LHS == RHS) return 1; // 1 means verified and value of 'K' is correct
    else return 0; // 0 means value of 'K' is wrong
}

int main()
{
    float K_1 = 5;
    float K_2 = -1;

    int v_1 = check(K_1);
    int v_2 = check(K_2);

    if((v_1 == 1) && (v_2 == 1)) printf("1"); // verified as correct
    else printf("0"); // verified as wrong
    
    return 0;
}