#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<string>
using namespace std;

//struktura

	

class BankAccount
{

	
		private:
			
		 string client_name;
		 int balance;
		 int id;
		 string address;
	 	int nr_checks=0;
	 	int checks_quantity=0;
	 	int nr_deposited=0;
	 	int quantity_deposited=0;
	 	
	 	
	 	
		
	
	
	public:

		void insertData(string,int,int,string);
		bool isFiveDigit(int);
	    string getName();
        string getAddress();
        int getId();
        int getBalance();
        void deposit(int );
        void extractMoney(int);
        int getQuantityChecks();
        int getNumberChecks();
        int getQuantityDeposited();
        int getNumberChecksDeposited();
        int findId(BankAccount t[],int id,int s);
        int findPosition(int* size);
        bool isId(BankAccount t[],int size,int id);
        
        
        
};

#endif
