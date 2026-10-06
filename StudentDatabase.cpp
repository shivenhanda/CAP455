#include <iostream>
using namespace std;

class Student{
	int rollno;
	string name;
	char gender;
	class Marks{
		int cpp,dbms,dsa;
		public:
			void input(){
			cout<<"Enter the cpp marks:";
			cin>>cpp;
			cout<<"Enter the dbms marks:";
			cin>>dbms;
			cout<<"Enter the dsa marks:";
			cin>>dsa;	
			}
			int total(){
				return cpp+dbms+dsa;
			}
			float percentage(){
				return (cpp+dbms+dsa)/3.0;
			}
	};
	Marks marks;
	public:
		void input(){
			cout<<"Enter the roll no:";
			cin>>rollno;
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the Gender:";
			cin>>gender;
			marks.input();
		}
		void display(){
			cout<<"\n Roll No:"<<rollno;
			cout<<"\n Name:"<<name;
			cout<<"\n Total:"<<marks.total();
			cout<<"\n Percentage:"<<marks.percentage()<<"%";
		}
		float getPercentage(){
			return marks.percentage();
		}
		int getTotal(){
			return marks.total();
		}
		char getGender(){
			return gender;
		}
};
int main(){
	int n=3;
	Student s[n];
	int male=0;
	int female=0;
	for(int i=0;i<n;i++){
		cout<<"Enter details of Student "<<i+1<<endl;
		s[i].input();
		if(s[i].getGender() == 'M' || s[i].getGender() == 'm')
    	{
        	male++;
    	}
    	else if(s[i].getGender() == 'F' ||
            	s[i].getGender() == 'f')
    	{
        	female++;
    	}
	}
	cout<<"\n========Student Database========\n";
	for(int i=0;i<n;i++){
		cout<<"\n Student "<<i+1<<endl;
		s[i].display();
	}
	int topper = 0;

	for(int i = 1; i < n; i++)
	{
    	if(s[i].getPercentage() > s[topper].getPercentage())
    {
        topper = i;
    }
	}
	cout<<"\n========Topper Student Marks========\n";
	s[topper].display();
	int minimum = 0;

	for(int i = 0; i < n; i++)
	{
    	if(s[i].getTotal() < s[minimum].getTotal())
    {
        minimum = i;
    }
	}
	cout<<"\n========Minimum Student Marks========\n";
	s[minimum].display();
	
	
	cout<<"\n======== Top 3 Students=========";
	int limit=(n<3)?n:3;
	for(int i=0;i<n;i++){
		cout << "\nRank " << i + 1 << endl;
		s[i].display();
	}
	cout << "\n===== CLASS SUMMARY =====" << endl;
	cout << "Total Students: " << n << endl;
	cout << "Total Male Students: " << male << endl;
	cout << "Total Female Students: " << female << endl;
	return 0;
}
