#include "struct3.h"

void fill_struct(character * perso)
{
    perso->strength = 99;  
    perso->intelligence = 250; 
    perso->wisdom = 100;  
    perso->agility = 150;
    perso->endurance = 1;  

}

int main()  
{  

  character *perso = malloc(sizeof(*perso));   
   
   
  fill_struct(perso);

  printf("The character has %d strength points\n", perso->strength);
  printf("%d intelligence points\n", perso->intelligence);
  printf("%d wisdom points\n", perso->wisdom);
  printf("%d agility points and\n", perso->agility);
  printf("%d endurance\n", perso->endurance);  

  free(perso);
  exit(0);  
}