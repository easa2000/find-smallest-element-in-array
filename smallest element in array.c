// find smallest element in a given array

#include<stdio.h>
void main(){
    int i,n,arr[20],small,pos;
    printf("\n Enter number of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    pos =0;
    for(i=1;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
            pos = i;
        }
    }
    printf("\n the smallest element is : %d",small);
    printf("\n The position of the smallest element in the array is: %d",pos + 1);
}
