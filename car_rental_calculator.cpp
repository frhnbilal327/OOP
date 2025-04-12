#include<iostream>
using namespace std;
int main(){
	int days,miles;
	float mcost,dcost,cost,extracost;
	cout<<"-----Rental System-----"<<endl;
	cout<<"Enter Number Of Days :";
	cin>>days;
	cout<<"Enter Number of Miles Driven : ";
	cin>>miles;
	dcost=25.0*days;
	mcost=0.15*miles;
	cost=dcost+mcost;
	if(days>30){
		cost=cost-(cost*20)/100;
	}
	if(days<15){
		cost=cost+(days*1.99);
	}
	cout<<"Total Cost : "<<cost<<" $.";
	return 0;	
}