#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "enter";
    // output using this method:
    for (int i = 4; i <= 0; --i)
    {
        cin >>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<"";
    }
    return 0;
}