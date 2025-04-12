#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int width;
};
int calculate_area(const rectangle &rect1){
    int area;
    area= rect1.length*rect1.width;
    return area;
}
int main(){
    rectangle rect1;
    cout<<"Enter Length of Rectangle : ";
    cin>>rect1.length;
    cout<<"Enter Width Of Rectangle : ";
    cin>>rect1.width;
    int area=calculate_area(rect1);
    cout<<"Area is : "<<area;
    return 0;
}