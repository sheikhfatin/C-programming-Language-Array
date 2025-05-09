#include<stdio.h>
int main(){
    int arr[6]={3,4,6,9,2,1};
    int evensum=0;
    int oddsum=0;
    for(int i=0; i<=5; i++){
       if(i%2==0){
evensum=evensum+arr[i];
       }else{
        oddsum=oddsum+arr[i];
       }
    }printf("%d\n", oddsum-evensum);
    return 0;
}
