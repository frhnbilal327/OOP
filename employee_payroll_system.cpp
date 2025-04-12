#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    string address;
public:
    Person(string n="",string a=""):name(n),address(a){}
    void setName(string n){name=n;}
    void setAddress(string a){address=a;}
    string getName()const{return name;}
    string getAddress()const{return address;}
};
class Employee:public Person{
protected:
    int employeeNumber;
    int hoursWorked;
public:
    Employee(string n="",string a="",int empNum=0,int hrs=0)
        :Person(n,a),employeeNumber(empNum),hoursWorked(hrs){}
    void setEmployeeNumber(int empNum){employeeNumber=empNum;}
    void setHoursWorked(int hrs){hoursWorked=hrs;}
    int getEmployeeNumber()const{return employeeNumber;}
    int getHoursWorked()const{return hoursWorked;}
};
class ProductionWorker:public Employee{
private:
    int shift;  
    double hourlyPayRate;
    double salary;
public:
    ProductionWorker(string n,string a,int empNum,int hrs,int s,double rate)
        : Employee(n,a,empNum,hrs),shift(s),hourlyPayRate(rate),salary(0){}
    void setShift(int s){shift=s;}
    void setHourlyPayRate(double rate){hourlyPayRate=rate;}
    int getShift()const{return shift;}
    double getHourlyPayRate()const{return hourlyPayRate;}
    double calculateSalary(){
        salary=hoursWorked*hourlyPayRate;
        if(shift==2&&hoursWorked>5){
            salary=salary+1000;
        }
        return salary;
    }
    void print_details(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Employee Number: "<<employeeNumber<<endl;
        cout<<"Hours Worked: "<<hoursWorked<<endl;
        cout<<"Shift: "<<(shift==1?"Day Shift":"Night Shift")<<endl;
        cout<<"Hourly Pay Rate: "<<hourlyPayRate<<endl;
        cout<<"Total Salary: "<<salary<<endl;
    }
};
int main(){
    ProductionWorker worker("Farhan", "Peshawar",101,8,2,20.5);
    worker.calculateSalary();
    worker.print_details();
    return 0;
}

