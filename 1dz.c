#include <stdio.h>

int main(){
 int i, l, j, x;
 int d[20];
 int a[101];
 printf("Выберите количество элементов: ");
 scanf("%d", &x);
 for(int i=0; i<x; i++){
  scanf("%d", &j);
  a[i]=j;
 }
 printf("Десятичные числа: ");
 for(i=0;i<x;i++){
  printf("%d ", a[i]);	
 }
 printf("\nДвочные числа: ");
 for(i=0;i<x;i++){
  while(a[i] != 0){
   if (a[i] % 2 == 0){
    a[i] = a[i] / 2;
    d[l] = 0;
   }else {
    a[i] = a[i]/ 2;
    d[l] = 1;
   }
   l++;
  }
  l = l - 1;
  for(;l >= 0;l--){
   printf("%d", d[l]);
  }
  printf(" ");
  for (l = 0; l < 20; l++){
   d[l] = 0;
  }
  l = 0;
 }
return(0);
}
