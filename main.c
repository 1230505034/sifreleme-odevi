#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//masa�st�ne input ve output isimli text dosyas� olu�turma 
	FILE *dosya;
	FILE *dosyacikis;
	int belge;
	dosya=fopen("C:\\Users\\guven\\OneDrive\\Masa�st�\\input.txt","rwa");
	dosyacikis=fopen("C:\\Users\\guven\\OneDrive\\Masa�st�\\output.txt","wa");
	
	//yap�lmak istenen eylem i�in ko�ul olu�turma
	int secim;
	printf("Sifre Kirmak icin:1\nSifre cozmek icin:2\nLutfen Secim yapiniz:");
	scanf("%d",&secim);
	
	do{
	
	
    belge=getc(dosya);//input dosyas�ndaki metinleri okumak i�in gereken kod
    
    //secilen ko�ullara g�re yap�lacak i�lemler
	if(isalpha(belge) && secim==1){
		
	
	int anahtar=3;//metindeki harfleri 3 sa�a kay�d�racak ve �ifleyecek  
	belge = tolower(belge);//b�y�k ve k���k harfleri ayn� kabul edecek
	belge-='a';
	belge+=anahtar;
	belge %=26;
	belge+='a';
	printf("%c",belge);	
	fputc(belge,dosyacikis);//��kt�y� output dosyas�na yazd�racak
	
	}
	//e�er 2 numara se�ilirse girilen �ifreli metni ��zecek
	else if(isalpha(belge) && secim==2){
	
	int anahtar=3;//metindeki harfleri 3 sa�a kay�d�racak ve �ifleyecek 
	belge = tolower(belge);//b�y�k ve k���k harfleri ayn� kabul edecek
	belge-='a';//
	belge-=anahtar;//
	belge %=26;//
	belge+='a';//
	printf("%c",belge);	
	fputc(belge,dosyacikis);//��kt�y� output dosyas�na yazd�racak
	}
	
	
	
	}
	
	
    
    while(belge!=EOF );//d�ng� olu�turmak ve input dosyas�ndaki metnin tamam�n� okumas� i�in gerekli olan kod
    
    
    //i�lem tamamlanmas� i�in gerekli olan kod
    fclose(dosya);
	fclose(dosyacikis);
    
    
    
	return 0;
}
