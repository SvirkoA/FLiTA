#include <stdio.h>
#include <stdbool.h>

void dec2bin(int);

int main(){
    int n;
    printf("Введите натуральное число: ");
    if(scanf("%d", &n) != 1){
        return 1;
    }else if(n < 0){
        printf("Отрицательное значение не подходит.\n");
        return -1;
    }else{
        dec2bin(n);
    }
    getch();
}

void dec2bin(int n){
    if (n == 0){
        return;
    }else{
        dec2bin(n / 2);
        putchar((n % 2) ? '1' : '0');
    }
}