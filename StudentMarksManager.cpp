#include<iostream>
using namespace std;
class Student{
		string name[10];
		int marks[10][3];
		int total[10];
		int count=0;
	public:
		void add_std(){
			if(count<10){
				cout<<"Enter Name : ";
				cin>>name[count];
				cout<<"Enter Marks : "<<endl;
				for(int i=0;i<3;i++){
					cout<<"Subject #"<<i+1<<" : ";
					cin>>marks[count][i];
				}
				count++;
				cout<<endl;
			}
			else{
				cout<<"No Space left!!!!";
			}
		}
		void display_std(){
			cout<<endl<<"Displaying Records"<<endl;
			cout<<"Number of Students : "<<count;
			for(int i=0;i<count;i++){
			total[i]=0;	
			cout<<"\nStudent Name : "<<name[i];
			cout<<"\nMarks : "<<endl;
			for(int j=0;j<3;j++){
				cout<<"\nSubject #"<<j+1<<" : "<<marks[i][j];
				total[i]=total[i]+marks[i][j];
				}
			cout<<"\nTotal Marks : "<<total[i];
			cout<<"\nAverage Marks : "<<(total[i]/5)<<endl;
			}
		}
		void highest(){
			cout<<endl<<"Displaying Top Student : "<<endl;
			int high=0;
			int high_index=0;
			if(count==0){
				cout<<"No Data."<<endl;
			}
			else{
				for(int i=0;i<count;i++){
				if(high<total[i]){
					high=total[i];
					high_index=i;
					}
				}
				cout<<"\nStudent with Highest Marks : "<<endl;
				cout<<"Name : "<<name[high_index];
				cout<<"\nMarks : "<<high<<endl;
			}
		}
		
};
int main(){
	Student stud;
	int n;
	do{
	cout<<"Student Marks Managment : "<<endl;
	cout<<"1.Add Student Record.\n2.Display Data\n3.Veiw Top Student.\n4.Exit";
	cout<<"\nEnter Your Choice : ";
	cin>>n;
	switch(n){
		case(1):
			stud.add_std();
			break;
		case(2):
			stud.display_std();
			break;
		case(3):
			stud.highest();
			break;
		case(4):
			cout<<"Exiting System..."<<endl;
			break;
		default:
			cout<<"Enter Valid Number please."<<endl;
		}
}
	while(n!=4);
	return 0;
}

