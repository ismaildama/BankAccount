#include<iostream>
#include<string>
#include<fstream>
#include "BankAccount.h"
using namespace std;


int main(){
	
	int s=100,balance;
	
	//object array
	
    BankAccount data[s],t;
    char p,v;
    string client_name,address;
    
    //te dhenat do te ruhen ne nje file qe krijohet me konstruktorin e ofstream
	 ofstream fout("data.txt");
	
    cout<<"Deshiron te vazhdosh?(p/j)\n";
    cout<<"Veprimi: ";
    cin>>p;
    while(p=='p'|| p=='P'){
    	while(true){
		
    	cout<<"Zgjidh veprimin(1,2,3)\n"
		<<"1-Regjistrohu\n"<<
		"2-Hyr ne llogari\n"<<
		"3-Dil\n";
		cout<<"______________________________________________________________"<<endl;
		cout<<"Veprimi: ";
		cin>>v;
		if(v=='1'){
			cout<<"Vendos te dhenat:\n";
			int in =t.findPosition(&s);
			
			cout<<"Vendos emrin: ";
			cin>>client_name;
			
	        cout<<"Vendos Id e llogarise(numer 5-shifror): ";
	        int i2;
	        
	        cin>>i2;
		// nqs id nuk ndodhet ne vektor  dhe id eshte 5 shifror dilet nga cikli
		 if(t.isFiveDigit(i2)==false||t.isId(data,s,i2) == true){
		 	while(t.isFiveDigit(i2)==false || t.isId(data,s,i2) == true){
		 		if(t.isId(data,s,i2) == true)
		 		cout<<"Id ekziston\n";
		 	if(	t.isFiveDigit(i2)==false)
		 	    cout<<"Vendos numer 5-shifror\n";
		 		cout<<"Vendos Id: ";
		 		cin>>i2;
			 }
		 }
		 
		 
		  
		   cout<<"Vendos balancen fillestare: ";
		   cin>>balance;
		    cout<<"Vendos adresen: ";
		   cin>>address;
		   //shkrimi i te dhenave ne file
		   fout<<client_name<<"\t"<<balance<<"\t"<<i2<<"\t"<<address<<endl;
		   
		   //vendosja e te dhenave ne vektor
		   data[in].insertData(client_name,balance,i2,address);
		   cout<<"Te dhenat u regjistruan me sukses\n";
		   
		  cout<<"________________________________________________"<<endl;
		}
		else if(v == '2'){
			int id;
			cout<<"Id: ";
			cin>>id;
		 int l = t.findId(data,id,s);
		 if(l<0){
		 	cout<<"Nuk je i regjistruar.\n";
		 }
		 else{
		 	while(true){
			cout<<"________________________________________________"<<endl;
		 	cout<<"Mireserdhe "<<data[l].getName()<<endl;
		 	cout<<"Cfare deshiron qe te besh(1,2,3,4,5)\n";
		 	cout<<"1-Depozito\n"<<"2-Terheq\n"<<"3-Statusi\n"<<"4-Historiku\n"<<"5-Dil"<<endl;
		 	cout<<"________________________________________________"<<endl;
		 	cout<<"Veprimi: ";
		 	int e,m;
		 	cin>>e;
		 		//depozitimi
		 	if(e==1){
		 		cout<<"Sasia qe do te depozitoni: ";
		 		cin>>m;
		 		data[l].deposit(m);
		 
		 		
			 }
			 //terheqja
			 else if(e==2){
			 	cout<<"Sasia qe do te terheqni: ";
		 		cin>>m;
		 		data[l].extractMoney(m);
		 		
			 }
			 //Statusi i balances
			 else if(e==3){
		 		cout<<"Balanca eshte "<<data[l].getBalance()<<" leke"<<endl;
		 	
			 }
			 //Nr i ceqeve,sasia e ceqeve,numri i depozitimeve,sasia e depozitimeve
			 else if(e==4){
			 	cout<<"Veprimet ne llogarine tuaj jane: \n";
			 	cout<<"Numri i depozitimeve: "<<data[l].getNumberChecksDeposited()<<endl;
			 	cout<<"Totali ne vlere i depozitimeve: "<<data[l].getQuantityDeposited()<<endl;
			 	cout<<"\nNumri i çeqeve eshte: "<<data[l].getNumberChecks()<<endl;
			 	cout<<"Totali i ceqeve eshte: "<<data[l].getQuantityChecks()<<endl;
			 }
			 //del nga kjo nenmenu
			  else if(e==5){
		 		break;
			 }
		
	 else
			cout<<"Numer i gabuar\n";
			
		 	
		 }	
		 	
		  }	
		 	
		 
			
			
		}
		else if(v=='3'){
			break;
		}
		else{
			cout<<"numer i gabuar\n";
		}
			
 }
    
     cout<<"Deshiron te vazhdosh?(p/j)\n";
     cout<<"Veprimi: ";
     cin>>p;
    
	}
	 //mbyllet file nga ofstream
     fout.close();
     
     cout<<"Te dhenat ne txt file jane:\n";
     //hapet file nga ifstream
     ifstream infile;
     infile.open("data.txt");
     
	 //printohen te dhenat
     while(infile>>client_name>>balance>>s>>address){
     	cout<<client_name<<" "<<" "<<balance<<" "<<s<<" "<<address<<endl;
	 }
     
    

return 0;
}
