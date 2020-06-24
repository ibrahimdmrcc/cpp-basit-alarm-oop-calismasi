#include <iostream>
#include "Zaman.h"
 
Zaman::Zaman(int saat, int dakika)
{
    if(saat>0 && saat<23){
    	saat = saat;
	}else{
		saat = 0;
	}
	if(dakika>0 && dakika <59){
		dakika = dakika;
	}else{
		dakika = 0;
	}
	
	alarmSayisi = 0;
	//alarm matrisine sifir atar.
	for(int i = 0;i<25;i++){
		for(int j = 0;j<3;j++){
			alarm[i][j] = 0;
		}
	}
	
}
 
void Zaman::yaz()
{
    printf("Saat: %d:%d",saat,dakika);
    
}
void Zaman::alarmEkle(int saat,int dakika)
{
    if(alarmSayisi==24){
    	printf("Daha fazla alarm eklenemez!");
	}
	else if(saat>0 && saat<23 && dakika<59 && dakika >0){
    	alarm[alarmSayisi][0] = saat;
    	alarm[alarmSayisi][1] = dakika;	   
	}
	alarmSayisi++;
}
void Zaman::alarmlariListele()
{
	
	printf("-->Alarmlar (%d)\n",alarmSayisi);
	
	for(int i = 0;i<alarmSayisi,i++)
	{
		int saat_kalan = 0;
		int dakika_kalan = 0;
		//eðer dakika eksiye düþerse saati bir dusuruyoruz.!!
		if((alarm[i][1]-dakika)<0){
			dakika_kalan = alarm[i][1]-dakika +60;
			saat_kalan = alarm [i][0] - saat -1;
		}else{
			dakika_kalan = alarm[i][1]-dakika;
			saat_kalan = alarm[i][0] - saat;
		}
		printf("%d. alarm =%d:%d (%d saat %d dakika sonra calacak)\n"alarm[i][0],alarm[i][1],saat_kalan,dakika_kalan);
	}

}



