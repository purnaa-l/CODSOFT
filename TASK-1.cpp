#include<iostream>
#include<stdlib.h>
#include<time.h>	
using namespace std;
int main()
{
	int x, guess, c=0;
	char answer, answer2;
	srand(time(NULL));
	x=rand();				//Generating a random number using rand() function. 
	int a=x%10000;
	int b=0, e=9999;		// Inititalising the conditions to the beginning as 0 and end as 9999. 
	loop:cout<<"Hello!\nWelcome to the Game!!!\nThe rules are simple, the answer ranges from 0 to 9999 and you guess the answer until you get it right!\nReady?\nLet's Go!\n"<<endl;
	cout<<"Type Y for continuing."<<endl;
	cin>>answer;
	if(answer=='y' || answer=='Y')
	{
		while(b<=e)
		{
			cout<<"Guess the number.\n(Remember the minimum limit is 0 and the maximum limit is 9999!)"<<endl;
			cin>>guess;
			if(guess<0 || guess>9999)
				{
					cout<<"The number you have entered does not lie in the range [0,9999]. Try again!"<<endl;
					break;
				}
			else
				{
					if(a==guess)
						{
							cout<<"Hurray! Your Guess is correct! You WIN!"<<endl;
							c++;
							cout<<"You took "<<c<<"  attempts to win the game! Bravo!"<<endl;
							break;
						}
					else
						{
							if(a>guess)
								{
									cout<<"Guess higher."<<endl;
									b=guess+1;
									c++;
								}
							else
								{
									cout<<"Guess Lower."<<endl;
									e=guess-1;
									c++;
								}
						}
				}
		}
	}
	else
	{
		cout<<"Seems like you don't want to play! :/ \nLet's try again!"<<endl;
		goto loop;
	}
	cout<<"Do you want to play again?"<<endl;
	cin>>answer2;
	if(answer2=='Y' || answer2=='y')
	{
		goto loop;
	}
	else
	{
		cout<<"Thank you for playing!"<<endl;
	}
		
	return 0;
}
