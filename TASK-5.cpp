#include <iostream>
#include <string>
using namespace std;
class Theatre
{
	private:
    	string movie_name;
    	int seats;
    	int n_row, n_column;
    	float cost;
    	int number;

	public:
		
    	Theatre()
    	{
        	cout << "Welcome to ABC Cinema!\nAre you ready to divulge into a world of beautiful Cinema?\nDive in!" << endl;
    	}

    	void Display()
    	{
        	int n;
        label:  cout << "\n\nMovie Showing: INFERNO.\nAvailable Shows are:  " << endl;
        		cout << "1. 09.30 AM" << endl;
        		cout << "2. 11.15 AM" << endl;
        		cout << "3. 16.00 PM" << endl;
        		cout << "4. 19.45 PM" << endl;
        		cout << "\nChoose your option." << endl;
        		cin >> n;
        		cin.ignore();
        		if (n == 1)
            		cout << "\n\nYou have chosen to watch INFERNO at 09.30 AM. \nContinue to book your seats!" << endl;
        		else if (n == 2)
            		cout << "\n\nYou have chosen to watch INFERNO at 11.15 AM. \nContinue to book your seats!" << endl;
        		else if (n == 3)
            		cout << "\n\nYou have chosen to watch INFERNO at 16.00 AM. \nContinue to book your seats!" << endl;
        		else if (n == 4)
            		cout << "\n\nYou have chosen to watch INFERNO at 19.45 AM. \nContinue to book your seats!" << endl;
        		else
        		{
            		cout << "\n\nUh-huh. Invalid option, it seems.\n No worries, Choose again!." << endl;
            		goto label;
        		}
    	}
    
   		int Tickets()
    	{
    			cout<<"\nHow many tickets do you want to book?\nThe cost per ticket is 200/- Rs.\n"<<endl;
    			cin>>number;
    			cout<<"\nYou have opted for "<<number<<" tickets."<<endl;
    			return number;
		}
		void Book(int m, int n, int seats[50][50])
    	{
        		cout << "\nThere are a total of 144 seats in this show.\nThe seats are displayed as follows."<<endl;
       			cout<<"\nKindly note the ones marked with X are the booked seats. Choose your seat!\n" << endl;
        		for (int i = 0; i < m; i++)
        		{
            		for (int j = 0; j < n; j++)
            	{
                	if (seats[i][j] == 0)
                	{
                    	cout <<" O ";
            		}
                	else
                	{
                    	cout << " X ";
                	}
            	}
            	cout << "\n";
        		}
			
				for(int t=1; t<=number; t++)
       			{
		 			int row, col;
        			label1: cout << "\nEnter row and column to book: ";
        			cin >> row >> col;
        			if(seats[row - 1][col - 1] ==1)
        			{
        				cout<<"\nUh-huh! Your selected seat has already been booked.\n\nKindly select a different seat!"<<endl;
        				goto label1;
					}
					else if(row>12 || col>12 || row<1 || col<1)
					{
						cout<<"Invalid Seat Selection!\nChoose another seat!"<<endl;
						goto label1;
					}
					else
        			seats[row - 1][col - 1] = 1; 
        			cout << "\n\Seat booked successfully!\n" << endl;
        			for (int i = 0; i < m; i++)
        			{
            			for (int j = 0; j < n; j++)
            			{
                			if (seats[i][j] == 0)
                			{
                    			cout << " O ";
                			}
                			else
                			{
                    			cout << " X ";
                			}
            			}
            		cout << "\n";
        			}		
    			}
    
		}
	
		void Cost()
		{
				cout<<"\nYou have booked "<<number<<" tickets. Your total cost is "<<200*number<<" Rs/-"<<endl;
		}
    
    	~Theatre()
    	{
    			cout<<"\nThank You for choosing ABC Cinemas!\nHappy Movie Time!"<<endl;
		}
};

int main()
{
    Theatre t;
    int seats[50][50] = {0};
    t.Display();
    t.Tickets(); 
    t.Book(12, 12, seats);
    t.Cost();
    return 0;
}

