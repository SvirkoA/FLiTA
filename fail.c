#include <stdio.h>
#include <stdbool.h>

void dec2bin(int);

int main(){
    int n;
    printf("Vvedite naturalnoe chislo: ");
    if(scanf("%d", &n) != 1){
        getch();
    }else if(n < 0){
        printf("Otritcatelnoe znachenie ne podhodit.\n");
        getch();
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