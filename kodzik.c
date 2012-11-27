#include <stdio.h>

void main(){
	printf("YEY YOU YOP 2 2 2 itd itp\n");
	//Tablice
	int ilosc = 5;
	double liczby[ilosc];
	
	//Liczniki programu
	double liczba = 0;
	int i = 0;
	
	//Dane statystyczne
	int iloscd = 0;
	int iloscz = 0;
	int iloscu = 0;
	
	for(i=0;i<ilosc;i++){
		scanf("%lf", &liczba);
		liczby[i] = liczba;
		if(liczba>0)
			iloscd++; //iloscd = iloscd + 1;
		else
			if(liczba<0)
				iloscu++;
			else
				iloscz++;
	}

	//Wyświetlanie wyniku na ekranie
	printf("Liczb dodatnich: %d, liczb ujemnych: %d, liczb będących zerem: %d\nLiczby:\n",iloscd,iloscu,iloscz);
	for(i=0;i<ilosc;i++){
		printf("liczba %i: %lf\n", i, liczby[i]);
	}
}
