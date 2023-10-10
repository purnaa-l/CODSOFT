#include<iostream>
using namespace std;

int main()
{
	float a, b;
	int function;
	cout<<"Hello! Welcome to the Calculator Program.\nKindly choose which of the below listed operations would you like to use. \n"<<endl;
	cout<<"1. Addition \n2. Subtraction\n3. Multiplication\n4. Division\nEnter the preferred operation below."<<endl;
	cin>>function;
	switch(function)
	{
		case 1:
		{
			cout<<"You have chosen ADDITION FUNCTION!"<<endl;
			cout<<"Enter the value of two numbers."<<endl;
			cin>>a>>b;
			cout << "The sum of " << a << " and " << b << " is: " << a+b << endl;
			break;
		}
		case 2:
		{
			cout<<"You have chosen SUBTRACTION FUNCTION!"<<endl;
			cout<<"Enter the value of two numbers."<<endl;
			cin>>a>>b;
			cout << "The difference of " << a << " and " << b << " is: " << a-b << endl;
			break;
	    }
		case 3:
		{
			cout<<"You have chosen MULTIPLICATION FUNCTION!"<<endl;
			cout<<"Enter the value of two numbers."<<endl;
			cin>>a>>b;
			cout << "The product of " << a << " and " << b << " is: " << a*b << endl;
			break;
	    }
		case 4:
		{
			cout<<"You have chosen DIVISION FUNCTION!"<<endl;
			cout<<"Enter the value of two numbers."<<endl;
			cin>>a>>b;
			cout<<"The quotient is : "<<a/b<<endl;
			break;
	    }
		default:
			{
				cout<<"Invalid Input. Please try again."<<endl;
			}
	}
	
	
	return 0;
}
