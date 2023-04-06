#include<iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3, cont, result, n;
    cin >> n >> x1 >> y1;
    x2 = x1;
    y2 = y1;
    cin >> x1 >> y1;
    x3 = x2;
    y3 = y2;
    x2 = x1;
    y2 = y1;
    result = 0;
    cont = n-1;
    while (cont > 0)
    {
        cin >> x1 >> y1;
        if (y3 == y2)
        {
            if (x3 > x2)
            {
                if (y2 > y1)
                {
                    result++;
                }
            }
            else
            {
                if (y2 < y1)
                {
                    result++;
                }
            }
        }
        else
        {
            if (y3 > y2)
            {
                if (x2 < x1)
                {
                    result++;
                }
            }
            else
            {
                if (x2 > x1)
                {
                    result++;
                }
            }
        }
        x3 = x2;
        y3 = y2;
        x2 = x1;
        y2 = y1;
        cont--;
    }
    cout << result;
    return 0;
}
