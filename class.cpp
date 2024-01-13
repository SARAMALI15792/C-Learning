#include<iostream>
using namespace std;
class car{
private:
int price;
public:

void setprice(int p);
};
void  car :: setprice(int p){
    price=p;
}



int main(){

car civic;
civic.setprice(9090);


    return 0;
}