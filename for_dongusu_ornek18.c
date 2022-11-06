#include <stdio.h>
// klavyeden girilen 2 sayının EBOB'unu ve EKOK'unu bulur

int main() 

{
 
 int sayi1,sayi2;
 int i;
 int ebob;
 
 printf("1.sayiyi girin: ");
 scanf("%d",&sayi1);

 printf("2.sayiyi girin: ");
 scanf("%d",&sayi2);
 
 for(i = 1 ; i <= sayi1 && i <= sayi2 ; i++)
 {
   if(sayi1 % i == 0 && sayi2 % i == 0)
   {
    ebob = i;
   }
 }
   
  int ekok = (sayi1 * sayi2) / ebob;
  
  printf("EBOB(%d,%d) = %d\n",sayi1,sayi2,ebob);
  printf("EKOK(%d,%d) = %d",sayi1,sayi2,ekok);

  return 0;

} 