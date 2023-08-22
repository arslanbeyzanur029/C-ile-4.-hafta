#include <stdio.h>
#include <stdlib.h>

struct karmasik{
	float sanal;
	float gercek;
};

int main() {
	struct karmasik sayi[2];
	float toplam_sanal,toplam_gercek;
	int i;
	for(i=0;i<2;i++){
		printf("%d.sayinin sanal kismini giriniz:",i+1);
		scanf("%f",&sayi[i].sanal);
		printf("%d.sayinin gercek kismini giriniz:",i+1);
		scanf("%f",&sayi[i].gercek);
	}
	printf("ilk karmasik sayiniz:%.1fi+%.1f\n",sayi[0].sanal,sayi[0].gercek);
	printf("ikinci karmasik sayiniz:%.1fi+%.1f\n",sayi[1].sanal,sayi[1].gercek);
	toplam_sanal=sayi[0].sanal+sayi[1].sanal;
	toplam_gercek=sayi[0].gercek+sayi[1].gercek;
	printf("\niki karmasik sayinin toplami:%.1fi+%.1f\n",toplam_sanal,toplam_gercek);
	
	return 0;
}
