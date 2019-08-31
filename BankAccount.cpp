#include "BankAccount.h"
#include<string>
#include<iostream>	

using namespace std;


//vendos te dhenat
void BankAccount::insertData(string n,int b,int i,string a){
	

	     client_name = n;
		 balance = b;
		 id = i;
		 address = a;
		 quantity_deposited=b; 
		
		//rrit nr e depozitimeve
	   	 if(b>0) 
	     nr_deposited++;
	 	 
		 
}
//kthen emrin
string BankAccount::getName(){
return client_name;
       
}
//kthen adresen
string BankAccount::getAddress(){
	return address;
}
//kthen id
int BankAccount::getId(){
	return id;
}
//kthen balancen
 int BankAccount::getBalance(){
 	return balance;
 }
 
 //kthen sasine ne leke te ceqeve totale
int BankAccount::getQuantityChecks(){
	return checks_quantity;
}
//kthen numrin e ceqeve
int  BankAccount::getNumberChecks(){
       return 	nr_checks;
}
//kthen sasine   totale ne leke te depozitimeve
int  BankAccount::getQuantityDeposited(){
      return  	quantity_deposited;
}
//kthen numrin e depozitimeve
int  BankAccount::getNumberChecksDeposited(){
      return   	nr_deposited;
}
//kthen true nqs parameteri eshte 5 shifror
bool BankAccount::isFiveDigit(int t){
	
	int c=0;
	while(t!=0){
		t/=10;
		c++;
		
	}
	
	if(c==5)
	return true;
	else
	return false;
}

//depoziton q leke ne llogari
void  BankAccount::deposit(int q){
		balance += q;
		quantity_deposited+=q; 
	    nr_deposited++;
	    cout<<"Balanca eshte "<<balance<<" lek."<<endl;
	}
//terheq q leke nga llogaria dhe vendos takse kur tejkalon limitin
void BankAccount::extractMoney(int q){
	if(balance<q){
		balance = balance-(q+15);
		
		cout<<"Ti je taksuar me 15 lek,pasi ke kaluar limitin.\n";
	}
		balance = balance-q;
	    checks_quantity += q;
     	nr_checks++;
	     cout<<"Balanca eshte "<<balance<<" lek."<<endl;
}
 //gjen indeksin e id ne vektor
 int BankAccount::findId(BankAccount t[],int id,int s){
 	int ind = -1;
	for(int i =0;i<s;i++){
		if(id == t[i].id){
			ind =i;
			break;
		}
	}
	return ind;
 }
 //kthen indeksin kur do te ruhet elementi ne vektor 
int BankAccount::findPosition(int *size){
    static int i=0;

	i++;
	//dyfishon madhesine e vektorit
	if(i == *(size)-1){
		
		*size = *size *2;
			
	}
	
	return i;
}

//kthen true nqs id ndodhet ne vektor
bool BankAccount::isId(BankAccount t[],int size,int id){
		bool isHere = false;
	for(int i =0;i<size;i++){
		if(id == t[i].getId()){
			isHere = true;
			break;
		}
	}
	return isHere;
        	
}


