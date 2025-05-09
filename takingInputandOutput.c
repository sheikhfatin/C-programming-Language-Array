// #include<stdio.h>
// int main(){
//     int arr[5]={2,4,6,8,10};
//     for(int i=0; i<=4; i++){
//         printf("%d\n", arr[i]);      //Getting boutput

//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
     printf("Enter numbers : ");
        scanf("%d",& arr[i]);

    }
    printf("%d\n", arr[2]);
    return 0;
}