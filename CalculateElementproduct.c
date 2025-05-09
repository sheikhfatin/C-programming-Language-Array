#include<stdio.h>
int main(){
    int arr[4]={2,4,6,8};
    int product=1;
    for(int i=0; i<=3; i++){
        product=product*arr[i];
    }printf("sum of the elements is %d", product);
    return 0;
}