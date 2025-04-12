#include <iostream>
using namespace std;
class logger{
    static string log[10]; 
    static int count;      
	public:
    	void logMessage(const string& msg){  
    	    if (count<10){
        	    log[count] = msg;
        	    count++;
        	} 
			else{
            cout << "Storage Full. Message cannot be logged.." << endl;
        	}
    	}
		void display()const{
        	cout << "Logged messages: " << endl;
        	for (int i=0;i<count;i++){
        	    cout<<log[i]<<endl;
        	}
    	}
};
string logger::log[10];
int logger::count = 0;
int main(){
    logger Obj; 
	string msg;
    for (int i=0;i<10;i++){
        cout <<"Enter Message: ";
        getline(cin, msg);
        Obj.logMessage(msg);
    }
	Obj.display(); 
    return 0;
}

