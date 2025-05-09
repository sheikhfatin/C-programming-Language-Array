#include<stdio.h>
int main(){
    int x;
    printf("Enter a number X : ");
    scanf("%d", &x);
    int arr[5]={2,4,6,8,7};
    for(int i=0; i<=4; i++){
        if(arr[i]>x)
        printf("%d\n", arr[i]);
    }return 0;

}