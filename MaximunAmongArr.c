#include<stdio.h>
int main(){
    int arr[4]={2,4,6,8};
   int max=arr[0];
    for(int i=0; i<=3; i++){
        if(max<arr[i])
        max=arr[i];
    }printf("max element is %d", max);
    return 0;
}