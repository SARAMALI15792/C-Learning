#include<iostream>
using namespace std;

int pattern_sum(int n){
    int sum=0;
    for(int i=1;i<=n;i+=2){
      sum+=(i*i);
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter the number of terms you want:-";
    cin>>num;
    cout<<pattern_sum(num);
    return 0;
}