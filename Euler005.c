#include <stdio.h>
int smallMulti(int x){
    int arr[x];
    int i;
    for(i=0;i<x;i++){
        arr[i]=i+1;
    }
    int j,k;
    for(j=0;j<x;j++){
        for(k=0;k<j;k++){
            if(arr[j]%arr[k]==0){
                arr[j]/=arr[k];
            }
        }
    }
    int multi,total;
    total=arr[0];
    for(multi=1;multi<x;multi++){
        total*=arr[multi];
    }
    return total;
}
int main()
{
    printf("Number five: %d", smallMulti(20));

    return 0;
}
