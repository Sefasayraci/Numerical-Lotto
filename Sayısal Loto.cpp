#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<iostream>

using namespace std;

 main()
 {
 	int lotorakami [6];//Deðiþken tanýmlandý
 	
	printf("                                2020/2021 SAYISAL LOTO SONUCLARINA HOSGELDINIZ\n");
 	
 	srand(time(NULL));//Programý her yenilediðimizde farklý bir sonuc ortaya çýkarmayý saðlar, kütüphanesi stdlib.h týr.
 	cout<<"sayisal loto sonucu:\n";//Ekrana yazdýrmak
 	for(int i=0;i<6;i++)
	 { 
	 
 sonuc:
 lotorakami[i] = rand()%50;//Burada loto rakamýnýn hangi sayý dilimi ile sonucunun olacaðýný belirtiyor.
 for(int j=i-1;j>=0;j--)//6 tane hane de farklý sonuclar ortaya çýkarmak.
   {
 	if(lotorakami[i]==lotorakami[j])
 	goto sonuc;//Program startý verildi.
  }
 cout<<lotorakami[i]<<"\t";
 }
}
