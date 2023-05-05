#include <iostream>
using namespace std;
int main ()
{
    int n, policiais_livres=0, total=0, evento;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> evento;
        if (evento>0)
        {
            policiais_livres+=evento;
        }
        else
        {
            if (policiais_livres>0)
            {
                policiais_livres--;
            }
            else
            {
                total++;
            }
        }
    }
    cout << total;
    return 0;
}
