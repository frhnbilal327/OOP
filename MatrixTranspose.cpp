#include<iostream>
using namespace std;
void transpose_matrix(int** matrix,int row,int column,int** t_matrix){
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			*(*(t_matrix+j)+i)=*(*(matrix+i)+j);
		}
	}
}
int main(){
	int row,column;
	cout<<"Enter number of Rows : ";
	cin>>row;
	cout<<"Enter number of Columns : ";
	cin>>column;
	
	int** matrix=new int*[row];
	
	for(int i=0;i<row;i++){
		matrix[i]=new int[column];
	}
	
	cout<<"Enter Elements of the Matrix : "<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"Entered Matrix : "<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int **t_matrix=new int*[column];
	
	for(int i=0;i<column;i++){
		t_matrix[i]=new int[row];
	}
	
	transpose_matrix(matrix,row,column,t_matrix);
	
	cout<<"Transpose of the entered Matrix : "<<endl;
	for(int i=0;i<column;i++){
		for(int j=0;j<row;j++){
			cout<<t_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<row;i++){
		delete[] matrix[i];
	}
	delete [] matrix;
	
	
	for(int i=0;i<column;i++){
		delete[] t_matrix[i];
	}
	delete [] t_matrix;
	return 0;
	
}