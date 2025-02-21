#include <stdio.h>

int main(){
int opcao, opcao1, bispo, torre, rainha; //Variavel de opção.
int bi, to, ra; // Variavel de calculo de Loop.
do{
printf("~Bem-vinde ao Xadrez?~\nEscolha uma opção\n");
printf("[1]. Jojar!\n");
printf("[2]. Sair\n");
scanf("%d", &opcao);
switch (opcao)
{
case 1:
 printf("Qual peça deseja mover?\n");
 printf("[1] Torre\n");
 printf("[2] Bispo\n");
 printf("[3] Rainha\n");
 scanf("%d", &opcao1);

 switch (opcao1)
 {
 case 1:
    printf("A Torre está em A1!\nQual direção ela vai?\n");
    printf("[1] Horizontal!\n");
    printf("[2] Vertical!\n");
    scanf("%d", &torre);
    switch (torre)
    {
    case 1:
    printf("Número negativo esquerda e número positivo direita!\n");
         scanf("%d", &to);
        if (to > 0){ to = 6 - to;}
       else if (to < 0) {to;}
    for (to; to <= 0 ;to)
    {
       if (to <= 0) {printf("Sua Torre sairá do tabuleiro\n");break;}}
    for (to; to > 0;to++)
    {printf("Direita\n");
      if (to == 5) {printf("Sua Torre andou para a Direita!\n");break;}}
    
      break;
      case 2:
      printf("Número negativo para Baixo e número positivo para Cima!\n");
      scanf("%d", &to);
     if (to > 0){ to = 7 - to;}
    else if (to < 0) {to;}
  for (to; to <= 0 ;to++){if (bi == bi) {printf("Sua Torre não consegue ir para trás!\n");break;}}
  for (to; to > 0;to++)
   {printf("Cima\n");
   if (to == 6) {printf("Sua Torre andou para Cima!\n");break;}}
      break;
    default:
    printf("Opção invalida!\n");
      break;
    }

    break;
    case 2:
    printf("O Bispo está na C1!\nEle vai para qual direção?\n");
    printf("[1] Diagonal Direita!\n");
    printf("[2] Diagonal Esquerda!\n");
    scanf("%d", &torre);
    switch (torre)
    {
    case 1:
    case 2:
      printf("Numéros negativo para Baixo e positivos para Cima!\n");
      scanf("%d", &bi);
      if(bi <= 0){printf("Se o Bispo voltar, sai do tabuleiro!\n");}
      else {bi = 7 - bi;
      do
      { printf("Cima\n");
         bi++;
         
      } while (bi < 7 && bi > 0);printf("Seu Bispo foi para Cima!");}
      break; }
    break;
    case 3:
    printf("A Rainha está em H2!\nEla vai para qual direção?\n");
    printf("[1] Vertical!\n");
    printf("[2] Horizontal!\n");
    printf("[3] Diagonal!\n");
    scanf("%d", &rainha);
switch (rainha)
{
case 1:
printf("Número negativo Esquerda e número positivo Direita!\n");
scanf("%d", &ra);
// No tabuleiro de xadrez o maximo de movimento é 7 casas. Embora seja uma tabuleiro 8x8, a casa da peça não conta no movimento :)
while (ra <= 0 && ra >= (-7))
{  ra+1;
int j = 0;
   while(j > ra){printf("Esquerda\n"); 
   j--;} if (j = ra){break;}
}
if(ra > 0 || ra <= -8){printf("Assim a Rainha cai do tabuleiro!\n");}
   break;
   case 2:
   printf("Número negativo para Baixo e número positivo para Cima!\n");
scanf("%d", &ra);
while (ra >= 0 && ra <= 6)
       {
         int i = 1;
   while (i <= ra)
       {printf("Cima\n"); 
   i++;} if (i = ra){break;};
   }
while (ra <= 0 && ra >= (-1))
{  ra+1;
int j = 0;
   while(j > ra){printf("Baixo\n"); 
   j--;} if (j = ra){break;}
}
if(ra > 6 || ra < -1){printf("Assim a Rainha cai do tabuleiro!\n");}
   break;
   case 3:
   printf("Qual diagonal?\n");
   printf("[1] Direita!\n");
   printf("[2] Esquerda!\n");
   scanf("%d", &rainha);
   if (rainha == 1){printf("Assim a Rainha cai do tabuleiro!\n");}
   else if(rainha == 2){printf("Número negativo para Baixo e número positivo para Cima!\n");
      scanf("%d", &ra);
      while (ra >= 0 && ra <= 6)
             {
               int i = 1;
         while (i <= ra)
             {printf("Cima\n"); 
         i++;} if (i = ra){break;};
         }
      while (ra <= 0 && ra >= (-1))
      {  ra+1;
      int j = 0;
         while(j > ra){printf("Baixo\n"); 
         j--;} if (j = ra){break;}
      }
      if(ra > 6 || ra < -1){printf("Assim a Rainha cai do tabuleiro!\n");}}
   else{printf("Opção invalida!\n");} 
   break;

}
    break;
    default:
    printf("Opção invalida!\n");
    break;
 }

    break;

    case 2:
    printf("Saindo...\n");
    break;
}} while (opcao != 2);
printf("Tchau, tchau.\nObrigada por Jogar!\n\n");
return 0;

}
