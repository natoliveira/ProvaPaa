#include <vector>
#include <iostream>
//algoritmo fibonacci Dinamico
//o custo do algoritmo é dado pela relação de recorência: t(n) = c(n-1) + c(n-2)
// a ordem de complexidade deste algoritmo é 0(n)
using namespace std;

int FibonacciD(vector<int> &v, int n)
{

    if(n==0 || n==1)
    {
        return n;
    }
    if(v[n - 1] >= -1)
    {
             v[n-1] = FibonacciD(v, n-1) + FibonacciD(v, n-2);
    }
    return v[n - 1];

}


int main()
{

int n = 3;
vector < int > v(n,-1);

cout << FibonacciD(v, n) << "\n";

}
