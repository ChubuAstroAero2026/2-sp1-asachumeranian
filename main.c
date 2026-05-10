#include <stdio.h>

int main(void){
  double a;
  int b;
printf("実数Aと桁数Bを入力:");
scanf("%lf %d",&a,&b);
printf("%.*f\n",b,a);
  //ここにコードを書く

  
  return 0;
}
