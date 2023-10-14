#include<iostream>
#include<string>
using namespace std;
class Grades

{
	private:
		int roll[1000];
		string Names[1000];
		int marks[1000];
		int number;
		char grade;
		
	public:
		    Grades()
			{
        		char answer;
        		cout << "Hello!\nWelcome to the Student Grade Portal!\nWould you like to enter the student data?" << endl;
        		cin >> answer;
        		if (answer != 'y' && answer != 'Y')
				 {
        	    	cout << "Exiting the program." <<endl;
           		 	exit(0);
       			 }
       		}
       		int Number(int n1)
       		{
       			cout << "How many students' data do you want to enter?" << endl;
        	   	cin >> n1;
        	   	number=n1;
        	   	return number;
       			
			}
       		 void GetData()
    		{
        		/*cout << "How many students' data do you want to enter?" << endl;
        		cin >> number;*/

        		for (int i = 0; i < number; i++)
        		{
            		cout << "Enter the Roll Number and Name of the student respectively?" << endl;
            		cin >> roll[i] >> Names[i];

            	label:	cout << "Enter the marks obtained by the student." << endl;
            			cin >> marks[i];

                	if (marks[i] < 0 || marks[i] > 100)
                	{
						cout << "Invalid marks. Enter valid marks (0-100)." << endl;
						goto label;
					}
            	}
        	}
    

		    void DisplayData()
			{
				for(int i=0; i<number; i++)
				{
					cout<<"For Roll Number: "<<roll[i]<<"  and Student Name:  "<<Names[i]<<" the marks is  "<< marks[i]<< "."<<endl;
				}
			}
		
		char AssignGrade(int m)
		{
		    char g;
		
		    if (m >= 91)
		        g = 'A';
		    else if (m >= 75)
		        g = 'B';
		    else if (m >= 61)
		        g = 'C';
		    else if (m >= 45)
		        g = 'D';
		    else if (m >= 33)
		        g = 'E';
		    else
		        g = 'F';
		
		    return g;
		}
			
			void DisplayData1()
			{
				char grade[1000];
				for(int i=0; i<number; i++)
				{
					grade[i]= AssignGrade(i);
					cout<<"For Roll Number: "<<roll[i]<<"  and Student Name:  "<<Names[i]<<" the marks and grade are  "<< marks[i]<< " and  "<<grade[i]<<"."<<endl;
				}
			}
			
			void Calculate()
			{
    			int sum = 0;
    			for (int i = 0; i < number; i++)
    				sum+=marks[i];

    			float avg = ((float)sum)/ number;
    			cout<<"AVG: "<<((int)avg);
   				char avgGrade = AssignGrade((int)avg);

    			cout << "The Average of all the class is: " << avg << " and the average grade is " << avgGrade << "." << endl;

    			int highest = marks[0];
   				int lowest = marks[0];

    			for (int i = 1; i < number; i++)
    			{		
        				if (marks[i] > highest)
            			highest = marks[i];

        				if (marks[i] < lowest)
            			lowest = marks[i];
    			}

    // Convert the highest and lowest marks to grades
    			char highestGrade = AssignGrade(highest);
    			char lowestGrade = AssignGrade(lowest);

    			cout << "The Highest and Lowest marks of the class are : " << highest << " and " << lowest << " respectively. And their respective grades are: " << highestGrade << " and " << lowestGrade << endl;
			}

			~Grades()
			{
			cout<<"Thank you for using the Student Grade Portal!"<<endl;
			}

};
int main()
{
	Grades grades;
	int n;
	grades.Number(n);
	grades.GetData();
    grades.DisplayData();
	grades.AssignGrade(n);
	grades.DisplayData1();
	grades.Calculate();
	
	
	return 0;
}



