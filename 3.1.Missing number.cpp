#include <iostream>
using namespace std;
int main ()
{
    int n, aux, soma=0;
    cin >> n;
    for (int i=1; i<n; i++)
    {
        cin >> aux;
        soma += aux;
    }
    cout << n*(n+1)/2 - soma;
    return 0;
}