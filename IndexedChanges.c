#include<stdio.h>
int main(){
    int arr[6]={2,3,4,5,6,7};
    for(int i=0; i<=5; i++){
        if(i%2==0){
            arr[i]=arr[i]*2;
        }else{
            arr[i]=arr[i]+10;
        }printf("%d ", arr[i]);
    }
    return 0;
}