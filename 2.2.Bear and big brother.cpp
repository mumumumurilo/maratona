#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b;
    n = 0;
    while (a <= b)
    {
        a*=3;
        b*=2;
        n++;
    }
    cout << n;
    return 0;
}
