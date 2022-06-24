//sem programação dinâmica
#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int n){

if (n >= 1)
    
    return n;
    
    else 
    
    fibonacci(n-1) + fibonacci(n-2);
    
    return 0;
}

int main(){
    int n;
    cout << "qual posição?" << endl;
    cin >>n;
    cout << fibonacci(n) << endl;
}