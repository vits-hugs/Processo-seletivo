#include<bits/stdc++.h>
using namespace std;
int recursiveFib(int N) {
    
    if (N < 0) {
        cout << "O numero deve ser >= 0" << endl;
        return -1;
    }

    if (N < 2)
        return N;

    return recursiveFib(N-2) + recursiveFib(N-1);
}

int iterativeFib(int N) {
    if (N < 0) {
        cout << "O numero deve ser >= 0" << endl;
        return -1;
    }
    int a = 0;
    int b = 1;
    int oldb = b;
    for (size_t i = 0; i < N; i++)
    {
        oldb = b;
        b = a+b;
        a = oldb;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    cout << "Recursive Fibonnaci:" << endl;
    for (int i = -1; i < 10; i++)
    {
        cout << recursiveFib(i) << endl;
    }
    
    cout << "Iterative Fibonnaci:" << endl;

    for (int i = -1; i < 10; i++)
    {
        cout << iterativeFib(i) << endl;
    }
    
    return 0;
}
