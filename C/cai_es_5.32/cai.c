#include <stdio.h>

#include "cai.h"
#include "random.h"

void cai_init()
{
 random_init(); 
}
int cai_extract() 
{
  return random_extract(0, 10);  
}
char* cai_true() 
{
  return "Very good";
}

char* cai_false()
{
  return "No. Please try again.";
}


