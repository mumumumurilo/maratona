#include <iostream>
using namespace std;
int main ()
{
    int n, ln_n=0;
    bool resultado=true;
    cin >> n;
    while (n>0)
    {
        if (n%10==4 || n%10==7)
        {
            ln_n++;
        }
        n=(int)n/10;
    }
    while (ln_n>0 && resultado==true)
    {
        if (ln_n%10!=4 && ln_n%10!=7)
        {
            resultado=false;
        }
        ln_n=(int)ln_n/10;
    }
    cout << resultado;
    return 0;
}