#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={2,4,6,8,10,22,43};
    int x=9;
    bool flag=false;
    for(int i=0; i<=6; i++){
        if(arr[i]==x)
        flag=true;
    }
    if(flag==false)
    printf("%d number is not present in the array", x);
    else 
    printf("%d number is present in the array", x);


return 0;
}