#include<stdio.h>
int main()
{
float fiyat,indirim;
printf(" Urun fiyatini giriniz :");
scanf("%f",&fiyat);
printf(" Indirim oranını giriniz (yuzde olarak):");
scanf("%f",&indirim);
printf("\n Urunun indirimli fiyati =%.2f",fiyat-(indirim*fiyat/100));
return(0);
}
