#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Size of Arrays : ";
	cin>>size;
	int a1[size];
	cout<<"Enter Elements of Array 1 : "<<endl;
	for(int i=0;i<size;i++){
		cin>>a1[i];
	}
	cout<<endl;
	int a2[size];
	cout<<"Enter Elements of Array 2 : "<<endl;
	for(int i=0;i<size;i++){
		cin>>a2[i];
	}
	cout<<endl;
	cout<<"Elements of Array 1 before swapping : "<<endl;
	for(int i=0;i<size;i++){
		cout<<a1[i]<<"  ";
	}
	cout<<endl;
	cout<<"Elements of Array 2 before swapping : "<<endl;
	for(int i=0;i<size;i++){
		cout<<a2[i]<<"  ";
	}
	cout<<endl;
	int temp;
	for(int i=0;i<size;i++){
		temp=a1[i];
		a1[i]=a2[i];
		a2[i]=temp;
	}
	cout<<"Elements of Array 1  after swapping : "<<endl;
	for(int i=0;i<size;i++){
		cout<<a1[i]<<"  ";
	}
	cout<<endl;
	cout<<"Elements of Array 2  after swapping : "<<endl;
	for(int i=0;i<size;i++){
		cout<<a2[i]<<"  ";
	}
	return 0;
}