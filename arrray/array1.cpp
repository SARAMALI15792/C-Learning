#include<iostream>
using namespace std;
int main(){
int a[7];
cout<<"enter ";
for(int i=0;i<=6;i++){
    cin>>a[i];
}
for(int i=0;i<=6;i++){
    cout<<a[i]<<"";
}
a[2]=18753;
cout<<endl;
for(int i=0;i<=6;i++){
    cout<<a[i]*2<<"";
}
    return 0;
}