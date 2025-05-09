#include<stdio.h>
int main(){
    int x;
    printf("Enter a number X : ");
    scanf("%d", &x);
    int count=0;
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7;j++){
            if(arr[i]+arr[j]==x)
            count++;
        }
    }printf("%d\n", count);
    return 0;

}