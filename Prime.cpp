#include<bits/stdc++.h>
using namespace std;

vector<int> recursivePrime(int N, vector<int>& vetor) {
    if (N < 2) {
        cout << "input invalido" << endl;
        return vetor;
    }
    else if (N > 2) {
        recursivePrime(N-1,vetor);
    }
    else {
        vetor.push_back(2);
    }

    bool isPrime = true;
    for(auto j: vetor) {
            if(N%j ==0) {
            isPrime = false;
            break;
            }
    }

    if(isPrime) {
        vetor.push_back(N);
    }

    return vetor;

}

vector<int> iterativePrime(int N) {
    vector<int> vetor;
    if (N < 2) {
        cout << "input invalido" << endl;
        return vetor;
    }
    vetor.push_back(2);
    for (size_t i = 3; i <= N; i+=2)
    {
        bool isPrime = true;
        for(auto j: vetor) {
             if(i%j ==0) {
                isPrime = false;
                break;
             }
        }

        if(isPrime) {
            vetor.push_back(i);
        }

    }
    return vetor;
}

int main(int argc, char const *argv[])
{
    vector<int> resposta_recursivo;
    
    resposta_recursivo = recursivePrime(10,resposta_recursivo);
    
    cout << "Função recursiva de primos:" << endl;

    cout << '[' << resposta_recursivo[0];
    for (size_t i = 1; i < resposta_recursivo.size(); i++)
    {
        cout << ',' << resposta_recursivo[i];
    }
    cout << ']' << endl;
    
    cout << "Função iterativa de primos:" << endl;

    vector<int> resposta_iterativo = iterativePrime(10);
    cout << '[' << resposta_iterativo[0];
    for (size_t i = 1; i < resposta_iterativo.size(); i++)
    {
        cout << ',' << resposta_iterativo[i];
    }
    cout << ']' << endl;

    return 0;
}
