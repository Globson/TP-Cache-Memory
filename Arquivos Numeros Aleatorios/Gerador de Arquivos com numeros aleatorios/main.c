#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  FILE *f;
  int i,a;
  char b[20];
  printf("\nQuantos numeros aleatorios deseja gerar na saida?");
  printf("\nEntre:");
  scanf("%d",&a);
  printf("\nQual o nome que deseja dar ao arquivo de saida?");
  printf("\nEntre:");
  scanf("%s",b);
  f = fopen(b,"w");
  srand(time(NULL));
  for (i=0; i < a; i++)
    {
    // gerando valores aleatórios na faixa de 0 a a
    fprintf(f,"%d\n", rand() % a);
    }
  fclose(f);
  printf("\nArquivo '%s' com %d numeros aleatorios gerado com sucesso!\n",b,a);


  return 0;
}
