#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    int p[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        cin >> p[i];
    }
    int total = 0;
    int custo = p[0];
    for (int i=0; i<n; i++)
    {
        if (p[i] < custo)
        {
            custo = p[i];
        }
        total += a[i]*custo;
    }
    cout << total;
    return 0;
}
