#include <iostream>
#include <cmath>
int main(int argc, char **argv)
{
    int N=atoi(argv[1]); //casting to int
    double *E= new double[N];
    for(int i =0;i<=N;i++)
    {
        E[i]=i;
    }
    delete[]E;
    return 0;
}
