#include<iostream>
using namespace std;
int log(int x,int y){
    if(y==0)return 1;
    return x*log(x,y-1);
}
int main(){
    int x ,y;
    cout<<"enter n";
    cin>>x>>y;
    cout<<log(x,y);
}