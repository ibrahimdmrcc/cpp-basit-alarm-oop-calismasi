#include "Zaman.h"
#include "Zaman.cpp"
#include <iostream>



int main(){
	cout<<"a nesnesi"<<endl;	
	zaman a(6);
	____________________       // a nesnesine 150 dakika ekleyin
	a.yaz();                    // a nesnesini ekrana yazd�r�n
	a.alarmEkle(3,00);          // a nesnesine 3:00 alarm� ekleyin
	a.alarmEkle(15,30);          // a nesnesine 15:30 alarm� ekleyin
	a.alarmEkle(7,00);          // a nesnesine 7:00 alarm� ekleyin
	a.alarmlariListele();       // a nesnesinin alarmlar�n� listeleyin

	cout<<"b nesnesi"<<endl;   
	zaman b(9,30);
	b.yaz();                 // b nesnesini ekrana yazd�r�n
	b.alarmEkle(7,00);       // b nesnesine 7:00 alarm� ekleyin
	b.alarmEkle(8,00);     // b nesnesine 8:00 alarm� ekleyin 
	b.alarmlariListele();     // b nesnesinin alarmlar�n� listeleyin
	if(______________)       // a ve b nesnelerinin e�it olup olmad���n� kotrol edin 
		cout<<"iki zaman esit"<<endl;
	else
		cout<<"iki zaman esit degil"<<endl;
	return 0; 
}


