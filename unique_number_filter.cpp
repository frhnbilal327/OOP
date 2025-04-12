#include<iostream>
using namespace std;
int main(){
	int size=10;
	int num[size];
	int n,i,j;
	int index=0;
	for(i=0;i<size;i++){
		int test=0;
		cout<<"Enter Any Integer b/w 10 & 100 : ";
		cin>>n;
		//checking number range
		if(n<10||n>100){
			cout<<"Invalid Input.....! Try Again.!? "<<endl;
			i--;
			continue;
		}
		//checking duplicate number
		for(j=0;j<i;j++){
			if(num[j]==n){
				test=1;
				break;
			}
		}
		if(test==0){
			num[index]=n;
			index++;
		}
	}
	//displaying unique numbers
	cout<<"Unique Numbers : "<<endl;
	for(i=0;i<index;i++){
		cout<<num[i]<<"  ";	
	}
	return 0;
}