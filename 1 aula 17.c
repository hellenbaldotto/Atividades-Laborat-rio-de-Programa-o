
#include <stdio.h>
#include  <string.h> 
{   
    char nome[50];
    char perfil [10];
    char copia[30];
    char mensagem [60] = "Bem-vindo (a)";
    printf("==== Cadastro de usuários ====\n");
    printf("Digite o seu nome: ");
    scanf("%49s," nome);
    printf("Digite o seu perfil: ");
    scanf("%9s", perfil);
  
    printf("\n====Dados Cadastro====\n");
    
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    if(strcmp(perfil, "ADMIN") == 0){
        printf("Perfil: Administrador.\n");
    } else {
        printf("Perfil: Comum.\n");
    };
 
    strcpy(copia, nome);
    strcat(mensagem, nome);
    printf("%s!\n", mensagem);
    printf("Cadastro relizado com sucesso.");
    return 0;
}

    return 0;
}