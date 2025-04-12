#include<iostream>
using namespace std;
int main(){
	int row,column;
	
	int**seats=new int*[5];
	
	for(int i=0;i<5;i++){
		seats[i]=new int[5];
	}
	
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		seats[i][j]=0;	
		}
	}
	
	do{
		cout<<"----Seat Reservations----"<<endl;
		cout<<"1.Enter Row Number & Seat Number You want to reserve."<<endl;
		cout<<"2.Enter 0 & 0 to exit. "<<endl<<"-----------------------------------------------"<<endl;
		cout<<"Enter Row number (1-5) : ";
		cin>>row;
		cout<<"Enter Seat Number (1-5) : ";
		cin>>column;
		if(row>5||column>5){
			cout<<"Invalid row or seat number...\nTry again."<<endl;
		}
		else if(seats[row-1][column-1]==0){
			seats[row-1][column-1]=1;
			cout<<"Seat Reserved successfully..."<<endl;
		}
		else{
			cout<<"Seat Already Reserved..."<<endl;
		}
		
	}
	while((row!=0)&&(column!=0));
	
	for(int i=0;i<5;i++){
		delete[]seats[i];
	}
	delete [] seats;
	return 0;
}