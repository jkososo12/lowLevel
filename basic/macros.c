#inlcude <stdio.h>
#define WIDHT 80
#define HEIGHT 25
#undef HEIGHT 25
#define HEIGHT 30

int main(){
  printf("File : %s", __FILE__);
  printf("Line : %d", __LINE__);
  printf("Date : %s", __DATE__);
  printf("Time : %s", __TIME__);
  return 0;
}
