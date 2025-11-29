#include<stdio.h>
#define PI 3.14 // sabit değer ataması
int main()
{
 float r, cevre, alan;
printf(" Dairenin yaricapini giriniz :");
scanf("%f",&r);
cevre=2*PI*r;
alan=PI*r*r;
printf(" \n Dairenin cevresi =%f  Dairenin alani =%f",cevre, alan);
return(0);
}
