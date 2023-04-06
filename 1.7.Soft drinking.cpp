#include<iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, x;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    x=(k*l)/(nl*n);
    if(x>(c*d)/n)
    {
        x=(c*d)/n;
    }
    if(x>p/(np*n))
    {
        x=p/(np*n);
    }
    cout << x;
    return 0;
}
