#include<stdio.h>
#include<math.h> // sqrt fonksiyonu için eklendi.
int main()
{
float a,b,hipotenus;
printf(" Ucgenin dik kenarlarini giriniz :");
scanf("%f%f",&a,&b);
hipotenus=sqrt(a*a+b*b);
printf(" \n Hipotenus değeri =%f ",hipotenus);
return(0);
}
