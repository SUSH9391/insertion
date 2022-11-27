#include<stdio.h>
void main(){
    int n,arr[10],pos,val;
    while(1){
    printf("\nEnter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter %d no of elements:",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
        for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    printf("Enter the position where you prefer to insert an element");
    scanf("%d",&pos);
    if(pos>=n+1){
        printf("insertion not possible\n");
        printf("ENter lower position!!\n");
    }
    
    else{
        for (int i = n-1; i >= pos; i--)
        {
            arr[i]=arr[i-1];
        }
        printf("Enter value to be inserted!!");
        scanf("%d",&val);
        arr[pos-1]=val;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    }
}
}