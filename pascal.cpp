#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int ncr(int n, int r)
{
   return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}