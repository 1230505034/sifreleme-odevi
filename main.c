#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//masaüstüne input ve output isimli text dosyasý oluþturma 
	FILE *dosya;
	FILE *dosyacikis;
	int belge;
	dosya=fopen("C:\\Users\\guven\\OneDrive\\Masaüstü\\input.txt","rwa");
	dosyacikis=fopen("C:\\Users\\guven\\OneDrive\\Masaüstü\\output.txt","wa");
	
	//yapýlmak istenen eylem için koþul oluþturma
	int secim;
	printf("Sifre Kirmak icin:1\nSifre cozmek icin:2\nLutfen Secim yapiniz:");
	scanf("%d",&secim);
	
	do{
	
	
    belge=getc(dosya);//input dosyasýndaki metinleri okumak için gereken kod
    
    //secilen koþullara göre yapýlacak iþlemler
	if(isalpha(belge) && secim==1){
		
	
	int anahtar=3;//metindeki harfleri 3 saða kayýdýracak ve þifleyecek  
	belge = tolower(belge);//büyük ve küçük harfleri ayný kabul edecek
	belge-='a';
	belge+=anahtar;
	belge %=26;
	belge+='a';
	printf("%c",belge);	
	fputc(belge,dosyacikis);//çýktýyý output dosyasýna yazdýracak
	
	}
	//eðer 2 numara seçilirse girilen þifreli metni çözecek
	else if(isalpha(belge) && secim==2){
	
	int anahtar=3;//metindeki harfleri 3 saða kayýdýracak ve þifleyecek 
	belge = tolower(belge);//büyük ve küçük harfleri ayný kabul edecek
	belge-='a';//
	belge-=anahtar;//
	belge %=26;//
	belge+='a';//
	printf("%c",belge);	
	fputc(belge,dosyacikis);//çýktýyý output dosyasýna yazdýracak
	}
	
	
	
	}
	
	
    
    while(belge!=EOF );//döngü oluþturmak ve input dosyasýndaki metnin tamamýný okumasý için gerekli olan kod
    
    
    //iþlem tamamlanmasý için gerekli olan kod
    fclose(dosya);
	fclose(dosyacikis);
    
    
    
	return 0;
}
