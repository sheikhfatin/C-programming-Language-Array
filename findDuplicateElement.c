#include<stdio.h>
int main(){
    int arr[7]={2,3,5,1,6,3,10};


for(int i=0; i<=6; i++){
    for(int j=i+1; j<=6; j++){
    if(arr[i]==arr[j]){
        printf("duplicate element is %d", arr[i]);
    }
    }
}return 0;
}