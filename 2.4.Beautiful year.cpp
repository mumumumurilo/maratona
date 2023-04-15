#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    bool stop;
    stop = 0;
    cin >> n;
    while (stop == 0)
    {
        n++;
        d = n % 10;
        c = (n % 100) / 10;
        b = (n % 1000) / 100;
        a = n / 1000;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            stop = 1;
        }
    }
    cout << n;
    return 0;
}
