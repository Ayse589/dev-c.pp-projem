#include<iostream>
using namespace std;
int main(){
 
	int dogru= 0;
	int yanlis=0;
	string cevap;
	   
        cout << "===== SORU 1 =====\n";
             cout << "5 + 3 kac eder?\n ";
             cin >> cevap ;
             if(cevap== "8"){
             	cout << "DOGRU\n";
             	dogru++;
             	
			 }
             else {
             	cout <<"YANLIS\n";
             	yanlis++;
			 }
            
             cout << "=====SORU 2 =====\n";
             cout << "Turkiye nin baskenti neresidir?\n";
              cin >> cevap ;
             if(cevap== "Ankara"){
             	cout <<"DOGRU\n";
             	dogru++;
             	
			 }
			 else{
			    cout <<"YANLIS\n";
			 	yanlis++;
			 	
			 }
			 cout <<"=====SORU 3=====\n";
			 cout << "maddenin uc hali nedir?\n";
			  cin >> cevap ;
			 if(cevap== "katisivigaz"){
			 	cout <<" DOGRU\n";
			dogru++;
			 	
			 }
			 else{
			 	cout <<"YANLIS\n";
			 	yanlis++;
			 }
		cout << "\nDogru sayisi: " << dogru << endl;
		
cout << "Yanlis sayisi: " << yanlis << endl;

		
}
