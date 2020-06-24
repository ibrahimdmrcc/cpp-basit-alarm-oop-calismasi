#include "Zaman.h"
#include "Zaman.cpp"
#include <iostream>



int main(){
	cout<<"a nesnesi"<<endl;	
	zaman a(6);
	____________________       // a nesnesine 150 dakika ekleyin
	a.yaz();                    // a nesnesini ekrana yazdýrýn
	a.alarmEkle(3,00);          // a nesnesine 3:00 alarmý ekleyin
	a.alarmEkle(15,30);          // a nesnesine 15:30 alarmý ekleyin
	a.alarmEkle(7,00);          // a nesnesine 7:00 alarmý ekleyin
	a.alarmlariListele();       // a nesnesinin alarmlarýný listeleyin

	cout<<"b nesnesi"<<endl;   
	zaman b(9,30);
	b.yaz();                 // b nesnesini ekrana yazdýrýn
	b.alarmEkle(7,00);       // b nesnesine 7:00 alarmý ekleyin
	b.alarmEkle(8,00);     // b nesnesine 8:00 alarmý ekleyin 
	b.alarmlariListele();     // b nesnesinin alarmlarýný listeleyin
	if(______________)       // a ve b nesnelerinin eþit olup olmadýðýný kotrol edin 
		cout<<"iki zaman esit"<<endl;
	else
		cout<<"iki zaman esit degil"<<endl;
	return 0; 
}


