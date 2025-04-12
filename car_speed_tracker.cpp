#include<iostream>
using namespace std;
class Car{
	static int maxSpeed;
	int currentSpeed;
	public:
		void setSpeed(int speed){
			currentSpeed=speed;
			if(maxSpeed<currentSpeed){
				maxSpeed=currentSpeed;
			}
		}
		static void getMaxspeed(){
			cout<<"/nHighest Speed Recorded : "<<maxSpeed;
		}
};
int Car::maxSpeed=0;
int main(){
	Car c[10];
	int speed;
	for(int i=0;i<10;i++){
		cout<<"Enter Speed : ";
		cin>>speed;
		c[i].setSpeed(speed);
	}
	Car::getMaxspeed();
	return 0;
}
