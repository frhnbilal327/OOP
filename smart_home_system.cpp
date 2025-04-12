#include <iostream>
#include <string>
using namespace std;
class Device{
protected:
    string deviceName;
    bool powerStatus;
    string location;
public:
    Device(string name,string loc):deviceName(name),location(loc),powerStatus(false){}
    void turnOn(){
        powerStatus=true;
        cout<<deviceName<<" is now ON."<<endl;
    	}
    void turnOff(){
        powerStatus=false;
        cout<<deviceName<<" is now OFF."<<endl;
		}
    void showStatus(){
        cout<<deviceName<<" in "<<location<<" is "<<(powerStatus?"ON":"OFF")<<"."<<endl;
		}
};

class SmartLight:public Device{
private:
    int brightness;
    string color;
public:
    SmartLight(string name,string loc,int bright=100,string col="White"):Device(name,loc),brightness(bright),color(col){}
    
    void adjustBrightness(int level){
        if(level>=0&&level<=100){
            brightness=level;
            cout<<"Brightness set to "<<level<<"%"<<endl;
        } else {
            cout<<"Invalid brightness level. Choose between 0-100."<<endl;
        }
    }
	void changeColor(string newColor){
        color=newColor;
        cout<<"Color changed to "<<newColor<<"."<<endl;
    }
};
class SmartThermostat:public Device{
private:
    float temperature;
    string mode;
public:
    SmartThermostat(string name, string loc, float temp = 22.0, string mod = "Auto") : Device(name, loc), temperature(temp), mode(mod){}
    void setTemperature(float temp){
        temperature=temp;
        cout<<"Temperature set to "<<temp<<"°C."<<endl;
        if(temp<18){
            switchMode("Heat");
        }
    }
    void switchMode(string newMode) {
        if(newMode=="Cool"||newMode=="Heat"||newMode=="Auto"){
            mode=newMode;
            cout<<"Mode switched to "<<newMode<<"."<<endl;
        } else{
            cout<<"Invalid mode. Choose from 'Cool', 'Heat', or 'Auto'."<<endl;
        }
    }
};

class SmartSecurityCamera : public Device {
private:
    string resolution;
    bool recordingStatus;
public:
    SmartSecurityCamera(string name,string loc,string res="1080p"):Device(name,loc),resolution(res),recordingStatus(false){}
    void startRecording(){
        recordingStatus=true;
        cout<<"Recording started on "<<deviceName<<"."<<endl;
    }
    void stopRecording(){
        recordingStatus=false;
        cout<<"Recording stopped on "<<deviceName<<"."<<endl;
    }
    void viewFeed(){
        cout <<"Displaying live feed from "<<deviceName<<" at "<<resolution<<" resolution."<<endl;
    }
};
int main(){
    SmartLight bedroomLight("Bedroom Light","Bedroom");
    bedroomLight.turnOn();
    bedroomLight.adjustBrightness(50);
    bedroomLight.changeColor("Blue");
    bedroomLight.showStatus();
    SmartThermostat thermostat("Home Thermostat","Living Room");
    thermostat.turnOn();
    thermostat.setTemperature(17);
    thermostat.showStatus();
    SmartSecurityCamera camera("Front Door Camera","Entrance");
    camera.turnOn();
    camera.startRecording();
    camera.viewFeed();
    camera.showStatus();
    
    return 0;
}

