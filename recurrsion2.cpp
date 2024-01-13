#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) 
    return n;
    return n+sum(n-1);
}
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<sum(n);
}