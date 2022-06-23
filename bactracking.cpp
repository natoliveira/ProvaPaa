#include <iostream>
#include <vector>

// A ordem de complexidade do algoritmo é o(nˆ2)
//l é i de acordo com a restrição do exercício
using namespace std;

void resposta(vector<int> vetor)
{
	for (int i = 0; i< vetor.size(); i++)
	//percorre e imprime vetor
		cout << vetor[i] << " ";
	cout << "\n";
}

//função que valida as restrições com os parâmetros utilizados solicitados
bool Valida(vector<int>& x1, int xj,  int j, int l)
{
    //verifica se x1 é dividível por xj para todo j < i (i aqui é o l)
    //l aqui equivale a i (restrição da questão 5 / j < i)
	if (x1.size() % xj == 0 && j < l)
		return true;
		//percorre valores 
	for (int i = 0; i < x1.size(); i++){
}

void backtracking(vector<int>& x1, int xj, int J)
{   
	if (x1.size() ==  J)
		return resposta(x1);
	
	for (int i = 1; i <= 3*N; i++)
		if (Valida(x1,  J, i))
		{
			x1.push_back(i);
			backtracking(x1, J);
			//retira o valor inserido no vetor.
			variaveis.pop_back();
		}
}

int main()
{
	int J = 2;
	vector<int> x1;
	backtracking(x1, J);
	return 0;
}