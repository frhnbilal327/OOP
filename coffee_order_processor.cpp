#include <iostream>
using namespace std;
class CoffeeOrder{
public:
    virtual void processOrder(int size,int price){
        cout<<"Total cost: $"<<(size*price)<<endl;
    }
};
class CustomOrder:public CoffeeOrder{
public:
    void processOrder(int size, int price){
        cout<<"Welcome to our Coffee Shop!"<<endl;
        CoffeeOrder::processOrder(size,price);
    }
};
int main(){
    int size,price;
    cout<<"Enter drink size (in ounces): ";
    cin>>size;
    cout<<"Enter price per ounce: ";
    cin>>price;
	CoffeeOrder standardOrder;
    CustomOrder customOrder;
	cout<<"\nStandard Order Processing:"<<endl;
    standardOrder.processOrder(size,price);
	cout<<"\nCustom Order Processing:"<<endl;
    customOrder.processOrder(size,price);
	return 0;
}

