#include<stdio.h>
int  main(){
    int arr[50],size1,i,n,pos,val;
    n = sizeof(arr);
    printf("Enter the array size \n");
    scanf("%d",&size1);
    if(size1 <= n  ){
        for(i=0;i<size1;i++)
            scanf("%d",&arr[i]);
        // printf("Enter Pisition = ");
        // scanf("%d",&pos);
        printf("\n Enter value = ");
        scanf("%d",&val);
        // Insert element in any possotion
        // for (i = size1-1; i >=pos-1 ; i--)
        // {
        //     arr[i+1] = arr[i];
        // }
        //     arr[i+1] = val;
        //     size1++; 

        // Insert element at last
        // arr[size1] = val;
        // size1++;


        // Insert element at starting
        for ( i = size1-1; i >= 0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[i+1] = val;
        size1++;
        for(i=0;i<size1;i++)
            printf("%d \t",arr[i]);
        printf("\n");
    }else
        printf("Array index of bound");
    return 0;
}