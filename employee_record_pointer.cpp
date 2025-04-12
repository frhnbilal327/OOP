#include<iostream>
using namespace std;
struct Employee {
	string name;
	int id;
	int salary;
};
int main(){
	Employee emp;
	Employee*pemp;
	pemp=&emp;
	cout<<"Enter Name : ";
	getline(cin,pemp->name);
	cout<<"Enter Id : ";
	cin>>pemp->id;
	cout<<"Enter Salary : ";
	cin>>pemp->salary;
	
	cout<<"Name : "<<pemp->name;
	cout<<"\nId : "<<pemp->id;
	cout<<"\nSalary : "<<pemp->salary;
	return 0;
}
