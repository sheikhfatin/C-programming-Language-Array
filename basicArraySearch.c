#include<stdio.h>
int main(){
    int x =3;
    int n;
    printf("Enter the size of array:  ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter values of array : ");
        scanf("%d", &arr[i]);
    }for(int i=0;i<n; i++){
        if(arr[i]==x)
        printf("%d", i);
    }
    return 0;

}