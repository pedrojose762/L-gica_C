// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int hora;
 
 printf(" Digite a hora atual(6 a 23): ");
 scanf("%d", &hora);
 
 if (hora >= 6 && hora <= 12) {
     printf("Bom dia!\n");
 } else if (hora > 12 && hora <= 18) {
     printf("Boa tarde!\n");
 } else if (hora > 18 && hora <= 23) {
     printf("Boa noite!\n");
 } else {
     printf ("Informe um número entre 6 e 23...");
 }
 
 return 0;
}