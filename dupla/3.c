#include<stdio.h>
#include<string.h>
#define DIM 2
    typedef struct _banda {
    char nome[40];
    char tipo[40];
    int integrante;
    int posicao;
    } banda;

    void analisa(banda vetor[DIM]){
      int i;
      printf("Insira as informacoes sobre nome, tipo, integrantes e posicao no ranking da banda\n");
      for(i=0;i<DIM;i++)
      {
        gets(vetor[i].nome);
        gets(vetor[i].tipo);
        scanf("%d",&vetor[i].integrante);
        scanf("%d",&vetor[i].posicao);
        do{} while(getchar()!='\n');
      }

      for(i=0;i<DIM;i++)
      {
        puts(vetor[i].nome);
        puts(vetor[i].tipo);
        printf("%d\n",vetor[i].integrante);
        printf("%d\n",vetor[i].posicao);
      }

    }
    void pedido_posicao(banda vetor[DIM]){
      int n;
      int i;
      printf("Escolha um numero de 1 a 5\n");
      scanf("%d",&n);
      do{} while(getchar()!='\n');
      for(i=0;i<DIM;i++){
        if(vetor[i].posicao==n)
        {
          puts(vetor[i].nome);
          puts(vetor[i].tipo);
          printf("%d\n",vetor[i].integrante);
          printf("%d\n",vetor[i].posicao);
        }
      }
    }

    void pedido_tipo(banda vetor[DIM])
    {
      char n[40];
      int i;
      printf("Escolha um tipo de musica\n");
      gets(n);

      for(i=0;i<DIM;i++)
      {
        if(strcmp(n,vetor[i].tipo)==0)
        {
          puts(vetor[i].nome);
          puts(vetor[i].tipo);
          printf("%d\n",vetor[i].integrante);
          printf("%d\n",vetor[i].posicao);
        }
    }
    }
    void pedido_nome(banda vetor[DIM])
    {
      char n[40];
      int i;
      printf("Digite o nome de uma banda\n");
      gets(n);

      for(i=0;i<DIM;i++)
      {
        if(strcmp(n,vetor[i].nome)==0 && vetor[i].posicao>=1 && vetor[i].posicao<=5)
        {
          printf("A banda esta entre as favoritas\n");
        }
      }

    }
    int main(){
      int escolha;
      banda vetor[DIM];
      printf("Digite o numero 1 para criar as bandas e exibir as informacoes delas ou digite o numero 0 para sair\n");
      scanf("%d",&escolha);
      do{} while(getchar()!='\n');
      while(escolha!=0){
          switch(escolha)
          {
            case 1:
            analisa(vetor);
            break;
            case 2:
            pedido_posicao(vetor);
            break;
            case 3:
            pedido_tipo(vetor);
            break;
            case 4:
            pedido_nome(vetor);
            break;

            default:
            printf("Comando invalido\n");
          }
          printf("Digite o numero 1 caso queira criar novas bandas e exibir as informacoes delas\n");
          printf("Digite o numero 2 para escolher uma das bandas favoritas e exibir suas informacoes\n");
          printf("Digite o numero 3 para escolher um tipo de musica e exibir as bandas com esse tipo de musica no seu ranking\n");
          printf("Digite o numero 4 para escolher o nome de uma banda e saber se ela esta entre as favoritas\n");
          printf("Digite o numero 0 para sair\n");
          scanf("%d",&escolha);
          do{} while(getchar()!='\n');
    }
    return 0;
}
