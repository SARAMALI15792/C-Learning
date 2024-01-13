#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}


int main(){
int a,b;
cout<<"*******welcome to calculator program*****"<<endl;
cout<<"enter the number u wnat"<<endl;
cin>>a>>b;
cout<<sum(a,b)<<endl;
cout<<mul(a,b)<<endl;


    return 0;
}