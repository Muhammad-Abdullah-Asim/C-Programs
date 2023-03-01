#include <stdio.h>
int main() 
{
  FILE *file = fopen("lb tsk 14 Qno.5.txt", "r");
  if (file == NULL) 
  {
    printf("Error\nExit (1)");
    return 1;
  }
  char name[256];
  while (!feof(file)) 
  {
    fgets(name, sizeof(name), file);
    printf("%.4s\n", name);
  }
  fclose(file);

  return 0;
}
