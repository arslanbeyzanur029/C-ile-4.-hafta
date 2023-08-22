#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
	char isim[10];
	char soyisim[10];
	int numara;
};

int main() {
	int n;
	printf("kac adet ogrenci bilgisi gireceksiniz:");
	scanf("%d",&n);
	struct ogrenci *bilgi=(struct ogrenci*)malloc(n*sizeof(struct ogrenci));
	int i;
	for(i=0;i<n;i++){
		printf("%d.ogrencinin adini giriniz:",i+1);
		scanf("%s",&bilgi[i].isim);
		printf("%d.ogrencinin soyadini giriniz:",i+1);
		scanf("%s",&bilgi[i].soyisim);
		printf("%d.ogrencinin numarasini giriniz:",i+1);
		scanf("%d",&bilgi[i].numara);
	}
	printf("\n\nOGRENCI BILGILERI\n\n");
	for(i=0;i<n;i++){
		printf("%d.ogrencinin adi: %s soyadi: %s  numarasi:%d \n",i+1,bilgi[i].isim,bilgi[i].soyisim,bilgi[i].numara);
	}
	return 0;
}
