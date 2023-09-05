#include<iostream.h>
#include<conio.h>
class Item
{
private:
    int itemNumber;
    char itemName[20];
    int quantity;
    float tax;
    float discount;

public:
    void getItemDetails() {
	cout << "Enter Item Number: ";
	cin >> itemNumber;
	cout << "Enter Item Name: ";
	cin >> itemName;
	cout << "Enter Quantity: ";
	cin >> quantity;
	cout << "Enter Tax (in percentage): ";
	cin >> tax;
	cout << "Enter Discount (in percentage): ";
	cin >> discount;
    }

    void displayItemDetails() {
	cout << "\nItem Number: " << itemNumber << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Tax (%): " << tax << endl;
	cout << "Discount (%): " << discount << endl;
    }
};

void main()
{
    int userId,i, password,numItems;
    Item obj[100];
    clrscr();
    cout << "Enter User Id: ";
    cin >> userId;
    cout << "Enter Password: ";
    cin >> password;
    if (userId == 123 && password == 456) {
	 numItems;
	cout << "Enter the number of items: ";
	cin >> numItems;
	for (i = 0; i < numItems; i++) {
	    cout << "\nEnter details for Item " << i + 1 << ":" << endl;
	    obj[i].getItemDetails();
	}

	cout << "\nBilling Details:" << endl;
	for ( i = 0; i < numItems; i++) {
	    cout << "\nDetails for Item " << i + 1 << ":" << endl;
	    obj[i].displayItemDetails();
	}
    }
    else
    {
	cout << "Authentication failed. Exiting program." << endl;
    }

    getch();
}
