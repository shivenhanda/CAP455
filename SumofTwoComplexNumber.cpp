#include<iostream>
using namespace std;
class Sum{
	int rnumber;
	int inumber;
	public:
		Sum(int r,int i){
			this->rnumber=r;
			this->inumber=i;
		}
		Sum add(Sum c)
		{
	    	return Sum(rnumber + c.rnumber, inumber + c.inumber);
		}
		void display()
		{
	    	cout << rnumber;
	
	    	if(inumber >= 0)
	        	cout << " + " << inumber << "i";
	    	else
	        	cout << " - " << -inumber << "i";
	
	    	cout << endl;
		}
};

int main() { 
	int r1, i1, r2, i2;
	cout << "Enter real and imaginary parts of first complex number: ";
	cin >> r1 >> i1;
	cout << "Enter real and imaginary parts of second complex number: ";
	cin >> r2 >> i2;
	Sum c1(r1, i1);
	Sum c2(r2, i2);
	Sum sum = c1.add(c2);

	cout << "First Complex Number: ";
	c1.display();
	
	cout << "Second Complex Number: ";
	c2.display();
	
	cout << "Sum: ";
	sum.display();

return 0;
}
