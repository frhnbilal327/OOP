#include<iostream>
using namespace std;
struct Book{
    string title;
    string author;
    float price;
};
int main(){
    Book* book=new Book[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Book Name : ";
        getline(cin, book[i].title);
        cout<<"Enter Author Name : ";
        getline(cin, book[i].author);
        cout<<"Enter Price : ";
        cin>>book[i].price;
        cin.ignore();//for ignoing new line element.
    }

    for(int i=0;i<5;i++){
        cout<<endl<<"Book Name : ";
        cout<<book[i].title;
        cout<<endl<<"Author Name : ";
        cout<<book[i].author;
        cout<<endl<<"Price : ";
        cout<<book[i].price;
    	cout<<endl;
	}
	delete [] book;
    return 0;
}
