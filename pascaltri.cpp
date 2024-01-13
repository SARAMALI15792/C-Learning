#include<iostream>
using namespace std;
int fact(int x){    //it is used for find first factorial then find ncr formmentioned below
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int ncr(int n ,int r){   //this is ncr for, to calculate

     return fact(n)/(fact(r)*fact(n-r));
}
int main(){
int n;
cout<<"enter the n"<<endl;
cin>>n;
for(int i=0;i<=n;i++){ 
    for(int j=0;j<=n-i-1;j++){// it is used for space 
        cout<<" ";
    }
for(int j=0;j<=i;j++){


    cout<<ncr(i,j)<<"  ";

}
cout<<endl;



}



    return 0;
}