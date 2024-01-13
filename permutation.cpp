#include <iostream>
using namespace std;
int per(int x)
{
    int p = 1;
    for (int i = 1; i <= x; i++)
    {
        p *= i;
    }
    return p;
}
int main()
{
    int n;
    cout << "n=" << endl;
    cin >> n;
    int r;
    cout << "r=" << endl;
    cin >> r;
    int a = per(n);
    int b = per(r);
    cout << a / b;

    return 0;
}