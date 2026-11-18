#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    
    printf("Digite 4 números: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int numeros [2][2] = {
        {n1, n2},
        {n3, n4}
    };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
    printf("%d ", numeros[i][j]);
    }
    printf("\n");
    }
return 0;
}



#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    
    printf("Digite 4 números: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int numeros [2][2] = {
        {n1, n2},
        {n3, n4}
    };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
    printf("%d ", numeros[i][j]);
    }
    printf("\n");
    }
return 0;
}