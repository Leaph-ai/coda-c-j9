#ifndef __STRUCT4_H__
#define __STRUCT4_H__ 

#include <stdlib.h>  
#include <stdio.h>  
#include <string.h> 
  
struct s_character {  
  char *name;
  int strength;
  int intelligence;
  int wisdom;
  int agility;
  int endurance;
     
};  
  
typedef struct s_character character;  
  
#endif //TESTS_STRUCT_H