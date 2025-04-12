#include<iostream>
using namespace std;
struct book{
	string title;
	string author;
	int pages;
	int price;
};
int main(){
	book mybook;
	cout<<"Enter Book Title : ";
	getline(cin , mybook.title);
	cout<<"Enter Name of Author : ";
	getline(cin , mybook.author);
	cout<<"Enter Number of Pages : ";
	cin>>mybook.pages;
	cout<<"Enter Price of the Book : ";
	cin>>mybook.price;
	
	cout << "Book Details : "<<endl;
    cout << "Title : "<<mybook.title<<endl;
    cout << "Author : "<<mybook.author<<endl;
    cout << "Pages : "<<mybook.pages<<endl;
    cout << "Price : "<<mybook.price<<" $"<<endl;
    
    return 0;
}