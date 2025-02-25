#include <stdio.h>
//Moviento da torre direita e esquerda!
void torreDE(int to){ if (to > 0 && to < 8){printf("Direita!\n"); torreDE(to - 1);} else if(to < 0 || to > 7){printf("Assim a Torre sai do tabuleiro\n");}   if(to == 0) {printf("A Torre foi para a Direita!\n");}
}
//Moviento da torre cima e baixo!
void torreCB(int to){ if (to > 0 && to < 8){printf("Cima!\n"); torreCB(to - 1);} else if(to < 0 || to > 7){printf("Assim a Torre sai do tabuleiro\n");}  if(to == 0) {printf("A Torre foi para a Cima!\n");}
}  //Moviento do bispo na diagonal!
void bispo(int bi){if (bi > 0 && bi < 8){printf("Cima!\n"); bispo(bi - 1);}else if(bi >= 8){printf("Assim o Bispo sai do tabuleiro\n");}  else if(bi == 0) {printf("O Bispo foi para Cima!\n");} }
//Moviento da rainha para esquerda e direita!
void rainhaDE(int ra){
 if (ra > 0){printf("Assim a Rainha cai do tabuleiro\n!");} 
else if (ra < 0) {if (ra <= (-1) && ra >= (-7)){printf("Esquerda!\n"); rainhaDE(ra + 1);}} if (ra == 0) {printf("Andou para a Esquerda!\n");} else if(ra <= (-8)){printf("Assim a Rainha cai do tabuleiro!\n");}
}
//Moviento da rainha para cima baixo e para diagonal
void rainhaCBD(int ra){
   if (ra > 0){if (ra >= (1) && ra <= (6)){printf("Cima!\n"); rainhaCBD(ra - 1);}} 
else if (ra < 0) {if (ra <= (-1) && ra >= (-1)){printf("Baixo!\n"); rainhaCBD(ra + 1);}} 
if (ra <= -2 || ra >= 7){printf("Assim a Rainha cai do Tabuleiro\n");}
if (ra == -1){printf("A Rainha andou para Baixo!\n");}
if (ra == 1){printf("A Rainha andou para Cima!\n");}
}
int main(){
    int opcao,  movimento, ca;
    char opcao1;
 do{
 printf("~Bem-vinde ao Xadrez?~\nEscolha uma opção\n");
 printf("[1]. Jojar!\n");
 printf("[2]. Sair\n");
 scanf("%d", &opcao);
 switch (opcao)
 {
 case 1:
 printf("Qual peça deseja mover?\n");
 printf("[T] Torre\n");
 printf("[B] Bispo\n");
 printf("[R] Rainha\n");
 printf("[C] Cavalo\n");
 scanf("%s", &opcao1);
 switch (opcao1)
 {
 case 'T':
 case 't':
 printf("A Torre está em A1!\nQual direção ela vai?\n");
 printf("[1] Horizontal!\n");
 printf("[2] Vertical!\n");
 scanf("%d", &movimento);
 if (movimento == 1){
    printf("Número negativo Esquerda e número positivo Direita!\n");
 scanf("%d", &movimento);
 torreDE(movimento);
 } else if (movimento == 2){
    printf("Número negativo para Baixo e número positivo Cima!\n");
    scanf("%d", &movimento);
    torreCB(movimento);
 }else {printf("Que isso?\n");}
    break;
 case 'B':
 case 'b':
 printf("O Bispo está na C1!\nEle vai para qual direção?\n");
    printf("[1] Diagonal Direita!\n");
    printf("[2] Diagonal Esquerda!\n");
    scanf("%d", &movimento);
    if (movimento == 1 || movimento == 2){
        printf("Número negativo para Baixo e número positivo para Cima!\n");
     scanf("%d", &movimento);
     bispo(movimento);
     } else {printf("Que isso?\n");}
 break;
 case 'R':
 case 'r':
 printf("A Rainha está em H2!\nEla vai para qual direção?\n");
    printf("[1] Vertical!\n");
    printf("[2] Horizontal!\n");
    printf("[3] Diagonal Esquerda!\n");
    printf("[4] Diagonal Direita!\n");
    scanf("%d", &movimento);
    if (movimento == 1){printf("Número negativo Baixo e número positivo Cima!\n");
      scanf("%d", &movimento);rainhaCBD(movimento);}
    else if (movimento == 2){printf("Número negativo Esquerda e número positivo Direita!\n");
      scanf("%d", &movimento);rainhaDE(movimento);}
      else if (movimento == 3){printf("Número negativo Baixo e número positivo Cima!\n");
         scanf("%d", &movimento);rainhaCBD(movimento);}
         else if (movimento == 4){printf("Assim a Rainha cai do tabuleiro!\n");}
         
 break;
 case 'C':
 case 'c':
 printf("O Cavalo está em D4!\nDeseja movimentar ele para qual direção?\n");
 printf("[1] Direita!\n");
 printf("[2] Esquerda!\n");
 printf("[3] Cima!\n");
 printf("[4] Baixo!\n");
 scanf("%d", &movimento);
 printf("Será um L para qual direção?\n");
 printf("[1] Direita!\n");
 printf("[2] Esquerda!\n");
 scanf("%d", &ca);
switch (movimento)
{
   case 1:
   if (ca == 1){for (int i = 0; i <= 1; i++)
      {for(int j = 0; j < 2; j++){printf("Direita!\n");}
printf("Cima!\n"); break;} }  
      
      if (ca == 2){for (int i = 0; i <= 1; i++)
         {for(int j = 0; j < 2; j++){printf("Direita!\n");}
   printf("Baixo!\n");break;}}
      break;
   
      case 2:
      if (ca == 1){for (int i = 0; i <= 1; i++)
         {for(int j = 0; j < 2; j++){printf("Esquerda!\n");}
   printf("Cima!\n");break;} }  
         
         if (ca == 2){for (int i = 0; i <= 1; i++)
            {for(int j = 0; j < 2; j++){printf("Esquerda!\n");}
      printf("Baixo!\n");break;}}
      break;
      case 3:
      if (ca == 1){for (int i = 0; i <= 1; i++)
         { for(int j = 0; j < 2; j++){printf("Cima!\n");}
   printf("Direita!\n");break;} }    
         if (ca == 2){for (int i = 0; i <= 1; i++)
            {for(int j = 0; j < 2; j++){printf("Cima!\n");}
      printf("Esquerda!\n");break;}}
   break;
   case 4:
   if (ca == 1){for (int i = 0; i <= 1; i++)
      {for(int j = 0; j < 2; j++){printf("Baixo!\n");}
printf("Direita!\n");break;} }  
      if (ca == 2){for (int i = 0; i <= 1; i++)
         { for(int j = 0; j < 2; j++){printf("Baixo!\n");}
   printf("Esquerda!\n");break;}}
   break;
 
 }}
    break;
 
    case 2:
    printf("Tchau tchau...\n");
    break;
 }}while(opcao != 2);


return 0;}
