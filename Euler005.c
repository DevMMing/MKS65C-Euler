#include <stdio.h>
int diff;
int sumsquare(int x){
    int i;
    int total;
    int square;
    for(i=1;i<=x;i++){
        square=i*i;
        total+=square;
    }
    return total;
}
int squaresum(int x){
    int i;
    int total;
    for(i=1;i<=x;i++){
        total+=i;
    }
    return total*total;
}
int main()
{
    diff=squaresum(100)-sumsquare(100);
    printf("Number 6: %d", diff);
    return 0;
}
