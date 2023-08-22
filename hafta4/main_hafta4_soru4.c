#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char dizi1[100],bosdizi1[100];
	char dizi2[100],bosdizi2[100];
	printf("ilk dizinize ifade giriniz:");
	fgets(dizi1,50,stdin);
	printf(" 1.diziniz: %s",dizi1);
	printf("ikinci dizinize ifade giriniz:");
	fgets(dizi2,50,stdin);
	printf(" 2.diziniz: %s",dizi2);
	printf("\n");
	strcpy(bosdizi1,dizi2);
	printf("dizi2'nin bos diziye'e kopyalanmis hali: %s",bosdizi1);
	printf("\n");
	printf("dizi1'in uzunlugu:%d \n dizi2'nin uzunlugu:%d",strlen(dizi1)-1,strlen(dizi2)-1);
	printf("\n");
	strcat(bosdizi1,dizi1);
	printf("dizi2'nin dizi1'le birlestirilmesi:%s",bosdizi1);
	printf("\n");
	if(strcmp(dizi1,dizi2)==0){
		printf("iki dizi esittir");
	}
	else{
		printf("iki dizi esit degildir");
	}
	
	
	return 0;
}
