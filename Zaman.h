#ifndef ZAMAN_H
#define ZAMAN_H
#include <iostream>

class Zaman
{
private:
	int alarmSayisi;
    int saat;
    int alarm[24][2];
    int dakika;
 
public:
    Zaman(int saat, int dakika);
 
    void yaz();
 	void alarmEkle(int saat, int dakika);
 	void alarmlar�Listele();
 	bool operator(Zaman z);
 	
};
 
#endif

