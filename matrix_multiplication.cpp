#include<iostream>
using namespace std;
int main(){
	int row1,column1,row2,column2;
	cout<<"Enter Rows number of Rows of Matrice #1 : ";
	cin>>row1;
	cout<<"Enter Columns number of Rows of Matrice #1 : ";
	cin>>column1;
	cout<<"Enter Rows number of Rows of Matrice #1 : ";
	cin>>row2;
	cout<<"Enter Columns number of Rows of Matrice #1 : ";
	cin>>column2;
	if(row1!=column2){
		cout<<"Matrices Cannot be multiplied.";
		return 0;
	}
	
	int**matrice1=new int*[row1];
	for(int i=0;i<row1;i++){
		matrice1[i]=new int[column1];
	}
	
	int**matrice2=new int*[row2];
	for(int i=0;i<row1;i++){
		matrice2[i]=new int[column2];
	}
	
	//initializing matrice 1
	cout<<"Enter Values of Matrice #1 : "<<endl;
	for(int i=0;i<row1;i++){
		for(int j=0;j<column1;j++){
			cin>>matrice1[i][j];
		}
	}
	
	//initializing matrice 
	cout<<"Enter Values of Matrice #2 : "<<endl;
	for(int i=0;i<row2;i++){
		for(int j=0;j<column2;j++){
			cin>>matrice2[i][j];
		}
	}
	
	//multiplication
	int**f_matrice=new int*[row1];
	for(int i=0;i<row1;i++){
		f_matrice[i]=new int[column2];
	}
	
	for(int i=0;i<row1;i++){
		for(int j=0;j<column2;j++){
			f_matrice[i][j]=matrice1[i][j]*matrice2[j][i];
		}
	}
	
	cout<<"Resultant Matrice : "<<endl;
	
	for(int i=0;i<row1;i++){
		for(int j=0;j<column2;j++){
			cout<<f_matrice[i][j]<<" ";
		}
		cout<<endl;
	}
	

	for(int i=0;i<row1;i++){
		delete [] matrice1[i];
	}
	delete [] matrice1;
	
	for(int i=0;i<row2;i++){
		delete [] matrice2[i];
	}
	delete [] matrice2;
	
	for(int i=0;i<row1;i++){
		delete [] f_matrice[i];
	}
	delete [] f_matrice;
	return 0;
}