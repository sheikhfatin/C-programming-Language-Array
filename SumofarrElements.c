#include<stdio.h>
int main(){
    int arr[4]={2,4,6,8};
    int sum=0;
    for(int i=0; i<=3; i++){
        sum=sum+arr[i];
    }printf("sum of the elements is %d", sum);
    return 0;
}