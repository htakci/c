#include<stdio.h>
#include<math.h> // sin() fonksiyonunu kullanabilmek için
#define PI 3.14
#define RADYAN_DONUSUMU(X) PI*X/180 // sin() fonksiyonu radyan cinsinden değer aldığı için
int main()
{
float a,b,alfa; // a ve b kenarlar, alfa aradaki aci olmak üzere
printf(" Ucgenin iki kenarini giriniz :");
scanf("%f%f",&a,&b);
printf(" Iki kenar arasindaki aci degerini giriniz :");
scanf("%f",&alfa);
printf("\n Ucgenin alanini bulunuz =%.3f",(0.5)*a*b*sin(RADYAN_DONUSUMU(alfa)));
getch();
return(0);
}
