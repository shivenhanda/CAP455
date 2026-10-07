#include<iostream>
using namespace std;
class BankAccount{
	private:
	string name;
	int balance=0;
	public:
		BankAccount(string name,int balance){
			this->name=name;
			this->balance=balance;
		}
		void deposit(int amount){
			balance+=amount;
		}
		void withdraw(int amount){
			balance-=amount;
		}
		void checkBalance(){
			cout<<name;
			cout<<"\n";
			cout<<"balance:"<<balance;
		}
};
int main(){
	BankAccount accholder1("shiven",100000);
	accholder1.deposit(100);
	accholder1.checkBalance();
	return 0;
}
