#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<iostream>

using namespace std;

 main()
 {
 	int lotorakami [6];//De�i�ken tan�mland�
 	
	printf("                                2020/2021 SAYISAL LOTO SONUCLARINA HOSGELDINIZ\n");
 	
 	srand(time(NULL));//Program� her yeniledi�imizde farkl� bir sonuc ortaya ��karmay� sa�lar, k�t�phanesi stdlib.h t�r.
 	cout<<"sayisal loto sonucu:\n";//Ekrana yazd�rmak
 	for(int i=0;i<6;i++)
	 { 
	 
 sonuc:
 lotorakami[i] = rand()%50;//Burada loto rakam�n�n hangi say� dilimi ile sonucunun olaca��n� belirtiyor.
 for(int j=i-1;j>=0;j--)//6 tane hane de farkl� sonuclar ortaya ��karmak.
   {
 	if(lotorakami[i]==lotorakami[j])
 	goto sonuc;//Program start� verildi.
  }
 cout<<lotorakami[i]<<"\t";
 }
}
