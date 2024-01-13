#include<iostream>
using namespace std;
int main(){
int n=200;
int*point=&n;
cout<<"the value of n is ="<<n<<endl;
cout<<"the address of n is="<<point<<endl;
int pn=12;
int*pointer=&pn;
cout<<"the value of pn is="<<pn<<endl;
cout<<"the address of pn is="<<point<<endl;



    return 0;
}