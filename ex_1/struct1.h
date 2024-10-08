#ifndef __STRUCT1_H__
#define __STRUCT1_H__ 

#include <stdlib.h>  
#include <stdio.h>  
#include <string.h> 
  
struct s_character {  
  int strength;
  int intelligence;
  int wisdom;
  int agility;
  int endurance;
     
};  
  
typedef struct s_character character;  
  
#endif //TESTS_STRUCT_H