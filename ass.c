#include<stdio.h>

int insert(int n, int arr[])
{
    //Function to insert the array element

    n++;
    int i,drr[n],data,pos;

    printf("\n\n  Enter the data to insert:\n");
    scanf("%d",&data);

    printf("   Enter the position to enter data:\n");
    scanf("%d",&data);
    for(i=0;i<pos;i++){
        drr[i]=arr[i];
    }

    drr[i]=data;

    for(i=pos+1;i<n;i++){
        drr[i]=arr[i-1];
    }

    for(i=0;i<n;i++){
        arr[i]=drr[i];
    printf("%d",arr[i]);
    }

    return n;
}

int del(int n,int arr[])
{
    //Function to delete the array element

    int i,pos;

    printf("\n\n  Enter the position of the elements to be declared:\n");
    scanf("%d",&pos);

    for(i=0;i<pos;i++){
        for(i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
}

int main()
{
    int n,i,arr[100];

    printf("  Enter the number of element for array:\n");
    scanf("%d",&n);

    printf("  Enter the array element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n");

    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    n=insert(n,arr);
    n=del(n,arr;)
}