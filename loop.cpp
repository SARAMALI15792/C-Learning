#include<iostream>
using namespace std;
int main(){
 int num,mul;
 cout<<"enter the table u want to print="<<endl;
    cin>>num;

 for(mul=1;mul<=12;mul++){
    
    cout<<num<<"*"<<mul<<"="<<(num*mul)<<endl;
 }



    return 0;
}