#include <stdio.h>
#include <conio.h>

int main(){

	while(1){
		double sayi1,sayi2,sonuc;
		char islem;

		printf("___Hesap Makinesi___\n");
		printf("Yapmak istediginiz islemi seciniz:\n");
		printf("Toplama icin -> +\n");
		printf("Bolme icin -> /\n");
		scanf("%c",&islem);

		if(islem=='+'){
			printf("Birinci sayiyi giriniz: ");
			scanf("%lf",&sayi1);
			printf("Ikinci sayiyi giriniz: ");
			scanf("%lf",&sayi2);
			sonuc=sayi1+sayi2;
			printf("Sonuc = %lf\n",sonuc);
			printf("------------------------------\n");
		}
		else if(islem=='/'){
			printf("Birinci sayiyi giriniz: ");
			scanf("%lf",&sayi1);
			printf("Ikinci sayiyi giriniz: ");
			scanf("%lf",&sayi2);
			sonuc=sayi1/sayi2;
			printf("Sonuc = %lf\n",sonuc);
			printf("------------------------------\n");
		}

	}

	return 0;
}