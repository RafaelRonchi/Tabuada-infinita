#include <stdio.h>

int main(void) {
  int x,num=1,tab=0,res;

  printf("Digite um numero para saber a sua tabua, digite 0 para sair: \n");

  while (num != 0){
    scanf("%d",&num);
    if (num==0){
      break;
    }

    while (tab<=10){
      res=num*tab;
      printf("%dx%d=%d\n",num,tab,res);
      tab++;
    }
    tab=0;
  }
  
  
  
}