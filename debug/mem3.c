#include<stdlib.h>
#include <stdio.h>
int main(void)
{
  int i,size;
  int **p;
  
  printf("Entrez un nombre\n");
  scanf("%d",&size);
  
  p = (int **)malloc(size * sizeof(int *));
  for(i = 0 ; i < size ; i++)
    p[i] =  (int *)malloc(size * sizeof(int));

  for( i = 0 ; i < size ; i++)
    free(p[i]);
  free(p);
  return EXIT_SUCCESS;     
}
