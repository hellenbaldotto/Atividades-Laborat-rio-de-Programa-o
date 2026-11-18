
#include <stdio.h>

int main()
{
   char palavra[100];
   int contador = 0;
   printf("Digite uma palvra: ");
   scanf("%99s", palavra);
   
   for (int i = 0; palavra[i] != '\0'; i++){
       contador++;
   };
   
   printf("A palavra possui %d letras.\n", contador);
   
    return 0;
}
