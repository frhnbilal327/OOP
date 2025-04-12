#include <iostream>
using namespace std;
// Global variables and arrays
const int stud = 10;
const int subject = 3;
string names[stud];
int marks[stud][subject];
int roll_no[stud];
int record_no = 0;
// User-defined functions
void add_student();
void display_record();
void average_marks();
void topper_record();
int main() {
    int n;
	 do {
	 	cout << "---Management System---" << endl;
        cout << "\n1. Add Student"
             << "\n2. Display Student Record"
             << "\n3. Display Average Marks of Students"
             << "\n4. Display Topper Student"
             << "\n5. Exit System\n";
        cout << "Enter your choice: ";
        cin >> n;
		 switch (n) {
            case 1:
                add_student();
                break;
            case 2:
                display_record();
                break;
            case 3:
                average_marks();
                break;
            case 4:
                topper_record();
                break;
            case 5:
                cout << "Exiting System." << endl;
                break;
            default:
                cout << "Invalid Input... Please try again!" << endl;
        }
    } while (n != 5);

    return 0;
}

void add_student() {
    if (record_no >= stud) {
        cout << "Database Full. Unable to add Record.\n";
    } else {
        cout << "Enter Student Name: ";
        cin >> names[record_no];
        cout << "Enter Roll Number: ";
        cin >> roll_no[record_no];
        for (int i = 0; i < subject; i++) {
            cout << "Enter Marks for subject " << i + 1 << ": ";
            cin >> marks[record_no][i];
        }
        record_no++;
    }
}

void display_record() {
    if (record_no == 0) {
        cout << "No Data Found." << endl;
    } else {
        cout << "---All Records---" << endl;
        for (int i = 0; i < record_no; i++) {
            cout << i + 1 << ". " << names[i] << " (Roll Number: " << roll_no[i] << ")\n";
            cout << "Marks:\n";
            for (int j = 0; j < subject; j++) {
                cout << "  Subject " << j + 1 << ": " << marks[i][j] << endl;
            }
        }
    }
}

void average_marks() {
    if (record_no == 0) {
        cout << "No Data Found." << endl;
    } else {
        for (int i = 0; i < record_no; i++) {
            int total_marks = 0;
            for (int j = 0; j < subject; j++) {
                total_marks += marks[i][j];
            }
            cout << "Average Marks of " << names[i] << ": " << (total_marks / subject) << endl;
        }
    }
}

void topper_record() {
    if (record_no == 0) {
        cout << "No Data Found." << endl;
    } else {
        int high = 0;
        int index = -1;
        for (int i = 0; i < record_no; i++) {
            int total_marks = 0;
            for (int j = 0; j < subject; j++) {
                total_marks += marks[i][j];
            }
            if (total_marks > high) {
                high = total_marks;
                index = i;
            }
        }
        if (index != -1) {
            cout << "Top Student:\n";
            cout << "Name: " << names[index] << "\nRoll Number: " << roll_no[index]
                 << "\nTotal Marks: " << high << endl;
        }
    }
}
