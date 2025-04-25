#include <stdio.h>
#define WIDHT 80
#define HEIGHT 25
#undef HEIGHT 
#define HEIGHT 30
#define LED_ON

#ifdef LED_ON
printf("LED is ON\n");
#else 
printf("LED is OFF\n");
#endif

int main(){
  printf("File : %s\n", __FILE__);
  printf("File : %s\n", __TIME__);
  printf("File : %s\n", __DATE__);
  printf("File : %d\n", __STDC__); 
  printf("File : %d\n", __LINE__); 
  return 0;
}
