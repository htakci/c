#include<stdio.h>
#include<math.h> // sqrt() fonksiyonu için eklendi, sqrt-->karekök 
#include<stdlib.h> // abs() fonksiyonu için eklendi, abs--> mutlak değer
int main()
{
float x1,y1,x2,y2,uzaklik;
printf(" Birinci nokta icin koordinatlari giriniz (x1,y1) :");
scanf("%f%f",&x1,&y1);
printf(" Ikinci nokta icin koordinatlari giriniz (x2,y2) :");
scanf("%f%f",&x2,&y2);
uzaklik=sqrt(abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2)); // (x1-x2)^2-(y1-y2)^2 bulunuyor (euclidian yöntemi)
printf("\n Iki nokta arasindaki uzaklik =%.3f",uzaklik);
return(0);
}
