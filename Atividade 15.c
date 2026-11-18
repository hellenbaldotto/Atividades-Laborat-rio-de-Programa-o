#include <stdio.h>

int main()
{
  int cadeiras[3][4] = {
      
      {0, 1, 0, 0},
      {1, 1, 0, 1},
      {0, 0, 1, 0}
      
  };
  
  int disponiveis = 0;
  int ocupadas = 0;
  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (cadeiras [i][j] == 0){
                disponiveis++;
                } else if (cadeiras [i][j] == 1) {
                    ocupadas++;
                }   
            
        } 
    }

printf("A quantidade de cadeira ocupadas é: %d\n", ocupadas);
printf("A quantidade de cadeiras disponiveis é: %d\n", disponiveis);
    
    
    return 0;
}