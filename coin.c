#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
  srand((unsigned int)time(NULL));
  int ransu;
  int hcut = 0,tcut = 0;

  printf("Tossing a coin...\n");
  
  for(int i = 0; i < 3; i++) {
    ransu = rand()%2+1;
    
    if(ransu % 2 == 0){
      printf("Round %d: Heads \n",i+1);
      hcut++;
    }else{
      printf("Round %d: Tails \n",i+1);
      tcut++;
    }
  }
  printf("Heads: %d, Tails: %d\n", hcut, tcut);
    
  return 0;
}
