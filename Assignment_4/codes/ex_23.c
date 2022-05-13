#include<stdio.h>

void print_out(int a[],int b[],int x[])
{
    for(int i = 0; i<9; i++)
    {
        printf("X({");
        if(a[i] == 0) printf("r ");
        if(a[i] == 1) printf("w1 ");
        if(a[i] == 2) printf("w2 ");
        if(b[i] == 0) printf("r})");
        if(b[i] == 1) printf("w1})");
        if(b[i] == 2) printf("w2})");
        printf(" = %d\n", x[i]);
    }
}

int main()
{
    int k=0;
    int a[9], b[9], x[9];
    // Assigned labels in the following 'for' loop. 
    // r --> 0; w1 --> 1; w2 --> 2;
    for(int i = 0; i<3; i++)
    {
        int p = 0;
        for(int j = 0; j<3; j++)
        {
            a[3*i+j] = k;
            b[3*i+j] = p;
            p++;
        }
        k++;
    }
    // the sample space will be in the form of number labels {a[i], b[i]}
    // assigning random variables for each element of the sample space.
    for(int i = 0; i<9; i++)
    {
        x[i] = 0;
        if(a[i] == 0) x[i]++;
        if(b[i] == 0) x[i]++;
    }

    print_out(a, b, x);// Prints the output in the coded format.

    return 0;
}