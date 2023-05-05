#include <iostream>
using namespace std;
int main()
{
    int n, dif=0;
    cin >> n;
    string dia[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for (int i=1; i<=n; i++)
    {
        if((i+1867)%4!=0 || ((i+1867)%100==0 && (i+1867)%400!=0))
        {
            dif+=1;
        }
        else
        {
            dif+=2;
        }
    }
    dif=dif%7;
    cout << dia[dif];
    return 0;
}