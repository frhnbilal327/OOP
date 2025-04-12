#include<iostream>
using namespace std;
int reverse_check(char*string1,char*string2){
	int l1,l2;
	l1=strlen(string1);
	l2=strlen(string2);
	if(l1!=l2){
		return 0;
	}
	for(int i=0;i<l1;i++){
		if(string1[i]!=string2[l2-i-1])
		return 0;
	}
	 return 1;
}
int main(){
	int s1,s2;
	cout<<"Enter Size of First String : ";
	cin>>s1;
	
	cin.ignore();
	
	char* string1= new char[s1+1];//+1 for the null character of the string
	
	cout<<"Enter First String : ";
	cin.getline(string1,s1+1);
	
	cout<<"Enter Size of Second String : ";
	cin>>s2;
	
	cin.ignore();
	
	char* string2= new char[s2+1];//+1 for the null character of the string
	
	cout<<"Enter Second String : ";
	cin.getline(string2,s2+1);
	
	if(reverse_check(string1,string2)){
		cout<<endl<<"The strings are reverse of eachother."<<endl;
	}
	else{
		cout<<endl<<"The strings are not reverse of eachother."<<endl;
	}
	delete [] string1;
	delete [] string2;
	return 0;
}