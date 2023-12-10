#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//masaüstüne input ve output isimli text dosyası oluşturma 
	FILE *dosya;
	FILE *dosyacikis;
	int belge;
	dosya=fopen("C:\\Users\\guven\\OneDrive\\Masaüstü\\input.txt","rwa");
	dosyacikis=fopen("C:\\Users\\guven\\OneDrive\\Masaüstü\\output.txt","wa");
	
	//yapılmak istenen eylem için koşul oluşturma
	int secim;
	printf("Sifre Kirmak icin:1\nSifre cozmek icin:2\nLutfen Secim yapiniz:");
	scanf("%d",&secim);
	
	do{
	
	
    belge=getc(dosya);//input dosyasındaki metinleri okumak için gereken kod
    
    //secilen koşullara göre yapılacak işlemler
	if(isalpha(belge) && secim==1){
		
	
	int anahtar=3;//metindeki harfleri 3 sağa kayıdıracak ve şifleyecek  
	belge = tolower(belge);//büyük ve küçük harfleri aynı kabul edecek
	belge-='a';
	belge+=anahtar;
	belge %=26;
	belge+='a';
	printf("%c",belge);	
	fputc(belge,dosyacikis);//çıktıyı output dosyasına yazdıracak
	
	}
	//eğer 2 numara seçilirse girilen şifreli metni çözecek
	else if(isalpha(belge) && secim==2){
	
	int anahtar=3;//metindeki harfleri 3 sağa kayıdıracak ve şifleyecek 
	belge = tolower(belge);//büyük ve küçük harfleri aynı kabul edecek
	belge-='a';//
	belge-=anahtar;//
	belge %=26;//
	belge+='a';//
	printf("%c",belge);	
	fputc(belge,dosyacikis);//çıktıyı output dosyasına yazdıracak
	}
	
	
	
	}
	
	
    
    while(belge!=EOF );//döngü oluşturmak ve input dosyasındaki metnin tamamını okuması için gerekli olan kod
    
    
    //işlem tamamlanması için gerekli olan kod
    fclose(dosya);
	fclose(dosyacikis);
    
    
    
	return 0;
}
