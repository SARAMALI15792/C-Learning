#include<iostream>
using namespace std;
int print(int n){
    if(n==0) //base 
    return n;  
    cout<<n<<endl; //work || print(n-1);
                      
    print(n-1);//call  //|| cout<<n<<endl;
}
int main(){

    int n;
    cout<<"enter the num";
    cin>>n;
    print(n);
    
}