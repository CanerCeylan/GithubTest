#include <stdio.h>
#include <conio.h>

int main(){

	while(1){
		double sayi1,sayi2,sonuc;

		printf("___Hesap Makinesi___\n");
		printf("Bu hesap makinesi sadece toplama yapar!\n");
		printf("Birinci sayiyi giriniz: ");
		scanf("%lf",&sayi1);
		printf("Ikinci sayiyi giriniz: ");
		scanf("%lf",&sayi2);
		sonuc=sayi1+sayi2;
		printf("Sonuc = %lf\n",sonuc);
		printf("------------------------------\n");

	}

	return 0;
}