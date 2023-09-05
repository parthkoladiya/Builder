#include<iostream.h>
#include<conio.h>
class Student
{
private:
    char  name[20];
    long int rollNumber,number;
    float marks;

public:
    void getData()
    {
	cout << "Enter student name: ";
	cin>>name;
	cout << "Enter roll number: ";
	cin >> rollNumber;
	cout << "Enter marks: ";
	cin >> marks;
    }

    void displayData()
    {
	cout << "Name ==> " << name << endl;
	cout << "Roll Number ==> " << rollNumber << endl;
	cout << "Marks ==> " << marks << endl;
       //	cout << "number ==>" << number << endl;
    }
};

void main()
{
    int n,i;
    Student obj[100];
    clrscr();
    cout << "Enter the number of students: ";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
	cout << "\nEnter details for student " << i + 1 << ":" << endl;
	obj[i].getData();
    }

    cout << "\nStudent Details:" << endl;
    for ( i = 0; i < n; i++)
    {
	cout << "\nDetails for student " << i + 1 << ":" << endl;
	obj[i].displayData();
    }

    getch();
}
