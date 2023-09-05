#include<iostream.h>
#include<conio.h>
class Bank
{
  long int w,balance;
  char name[20],p1[20] ,name1[20],accountnumber[20],phonenumber[20],email[20];
  public:
		void setdata()
		{
			cout << "\t\t-: BANK MANAGMENT SYSTEM :-" << endl;
			cout << "\t-------------------------------------------\n" << endl;
			cout << "\t\t-: Designed N Programed By:-" << endl;
			cout << "\t---------------------------------------------" << endl;
			cin >> name;
			cout << "\n\n\t\t        -:Trainer:-" << endl;
			cout << "\t---------------------------------------------" << endl;
			cout << "\t\t\tAshish Goshami" << endl;
			cout << "\n\t\tPress Any Key And Enter To continue. . ." << endl;
		}
		void getdata()
		{
		       cout << "Enter your staff Name";
		       cin >> name;
		       cout << "Enter the account number of staff";
		       cin >> accountnumber;
		       cout << "Enter the Phone number of staff";
		       cin >> phonenumber;
		       cout << "Enter your e-mail of staff";
		       cin >> email;
		}
		void calldata()
		{
		 cout << "--------------------------------------------------------------------------------------------------------" << endl;
		 getdata();
		 cout << "\n------------------------------------------------------------------------------------------------------" << endl;
		  cout << "Press [1] to Deposit the money ==>" << endl;
		  cout << "\nPress [2] to Transfer the money ==>" << endl;
		  cout << "\n Press [3] to Whitdraw the money ==>" << endl;
		}
		void PPT()
		{
		  cout<<"Enter your whitdraw amount";
		  cin>>w;
		 /* balance = balance - w;
		  bank_balance = bank_balance - w;
		  cout<<balance;*/
		  if (balance<=w)
		  {
		    cout<<"Re enter your value";
		  }
		  else
		  {
		    cout<<"Your amount is whitdraw";
		  }
		}
		void display()
		{
		      cout << "\nStaff Information == >" << endl;
		      cout << "Name" << name << endl;
		      cout << " Account number " << accountnumber << endl;
		      cout << " Phonenumber " << phonenumber << endl;
		      cout << " E-mail " << email << endl;
		}
};
void main()
{
  int choose,choice;
  Bank obj;
  clrscr();
  obj.setdata();
  cout << "\n\n\t---------------------------------------------------------" << endl;
  cout << "\n\t   -: 1 to login Aministerator and 2 to login staff :-" << endl;
  cout << "\t-------------------------------------------------------------" << endl;
  cin >> choose;
  if(choose == 1)
  {
    cout << "Aministerator Login";
  }
  else if(choose == 2)
  {
     obj.getdata();
     obj.display();
  }
  else
  {
   cout <<"Invalid";
  }
  obj.calldata();
  cout << "Enter your whitdraw ammount" << endl;
  cin >> choice;
  if(choice == 1)
  {
    cout << "DIPOSIT";
  }
  else if (choice == 2)
  {
   cout << "Transfer";
  }
  else if (choice == 3)
  {
    obj.PPT();
  }
  getch();
}