#include "struct4.h"

void fill_struct(character * perso)
{
    perso->strength = 125;  
    perso->intelligence = 17; 
    perso->wisdom = 86;  
    perso->agility = 12;
    perso->endurance = 69;  

}

int main()  
{  

  character *perso = malloc(sizeof(*perso));   
  perso->name = malloc(strlen("Anselme") * sizeof(char));  
  perso->name = strcpy(perso->name, "Anselme");  
   
  fill_struct(perso);

  printf("%s has :\n", perso->name);
  printf("%d strength points\n", perso->strength);
  printf("%d intelligence points\n", perso->intelligence);
  printf("%d wisdom points\n", perso->wisdom);
  printf("%d agility points and\n", perso->agility);
  printf("%d endurance\n", perso->endurance);  

  free(perso->name);
  free(perso);
  exit(0);  
}