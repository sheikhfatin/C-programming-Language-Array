#include<stdio.h>
int main(){
    int rash [5];
    int *ptr = &rash[0];

    for(int i=0; i<5; i++){
        printf("%d index : ",i);
        scanf("%d", &rash[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d index is %d\n", i, rash[i]);
    }
    return 0;
}