#include <iostream>
//algoritmo fibonacci Recursivo
//o custo do algoritmo é dado pela relação de recorência: t(n) = c(n-1) + c(n-2)
// a ordem de complexidade deste algoritmo é 0(n)
using namespace std;

int FibonacciR( int n, int N)
{

    if(n==0 || n==1)
    {
        return n;
    }
    if(n >= -1)
    {
             N = FibonacciR(n-1) + FibonacciR(n-2);
    }
    return N;

}


int main()
{

int n = 3;
cout << FibonacciR(n, N) << "\n";

}
