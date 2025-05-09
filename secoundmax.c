#include<stdio.h>
#include<limits.h>

int main(){
    int arr[6]={2,49,8,100,3,1};
    int max= INT_MIN;
    int smax=INT_MIN;
 for(int i=1; i<=5; i++){
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=1; i<=5; i++){
        if(arr[i]!=max && smax<arr[i])
        smax=arr[i];
    }printf("secound max is %d", smax);
    return 0;
}