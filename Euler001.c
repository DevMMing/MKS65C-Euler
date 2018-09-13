#include <stdio.h>
int total;
int inc1000(int num){
  int i;
  int sum;
  sum=0;
  for(i =0;i<1000;i+=num){
    sum+=i;
  }
  return sum;
}
int main(void) {
  total=inc1000(3)+inc1000(5)-inc1000(15);
  printf("Number one: %d",total);
  return 0;
