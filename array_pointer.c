#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *q = a;
    for(int i=0;i<10;i++){
        // printf("%p \n",&a[i]);
        // printf("%d \t",(*(a+i))+1);
        // printf("%d \t",i[a]);
        // printf("%p \n",&q[i]);
        
    }
    printf("%d",*(a+1));
    printf("\n");
    return 0;
}