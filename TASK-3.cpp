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
				cout << "Hello there!\nWelcome to the Student Grade Portal!\nWould you like to enter the student data?\nPlease enter 'Y' to continue." << endl;
        		cin >> answer;
        		if (answer != 'y' && answer != 'Y')
				 {
        	    	cout << "Exiting the program." <<endl;
           		 	exit(0);
       			 }
       		}
       		
       		int Number(int n1)
       		{
       			cout << "\nHow many students' data do you want to enter?" << endl;
        	   	cin >> n1;
        	   	number=n1;
        	   	return number;
       		}
       		
       		 void GetData()
    		{
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
					cout<<"\nFor Roll Number: "<<roll[i]<<"  and Student Name:  "<<Names[i]<<" the marks is  "<< marks[i]<< "."<<endl;
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
					cout<<"\nFor Roll Number: "<<roll[i]<<"  and Student Name:  "<<Names[i]<<" the marks and grade are  "<< marks[i]<< " and  "<<AssignGrade(marks[i])<<"."<<endl;
				
			}

			void Calculate()
			{
    			int sum = 0;
    			for (int i = 0; i < number; i++)
    				sum+=marks[i];

    			float avg = ((float)sum)/ number;
   				cout << "\nThe Average of all the class is " << avg << " and the average grade is " << AssignGrade((int)avg) << "." << endl;
    			int highest = marks[0];
   				int lowest = marks[0];
    			for (int i = 1; i < number; i++)
    			{		
        				if (marks[i] > highest)
            			highest = marks[i];
        				if (marks[i] < lowest)
            			lowest = marks[i];
    			}
    			cout << "\nThe Highest and Lowest marks of the class are : " << highest << " and " << lowest << " respectively. \nAnd their respective grades are: " << AssignGrade(highest) << " and " << AssignGrade(lowest) << endl;
			}
			
			~Grades()
				{
					cout<<"\n\nThank you for using the Student Grade Portal!"<<endl;
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



