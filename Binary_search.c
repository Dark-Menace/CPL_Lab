/* Implement Binary Search on Integers 
   Sorting the array before searching using Selection sort */
#include<stdio.h>
#include<stdlib.h>
int Arr[1],i,j,n;
void bin(int a[],int n);
void sort(int Arr[]);
int main()
{
    char ch='y';
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
    }
    sort(Arr);
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",Arr[i]);
    }
    while(ch=='Y'||ch=='y')
    {
        bin(Arr,n);
        printf("Do you wish to continue:Y/N\n");
        scanf("%s",&ch);
       // while(getchar()!='\n');
    }
    return 0;
}
void sort(int Arr[])
{   
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(Arr[i]>Arr[j])
            {
                temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
    }
}
void bin(int a[],int n)
{
    int mid,low=0,high=(n-1),key;
    printf("\nEnter the element value to be searched:\n");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if (key==a[mid])
        {
            printf("Element found in position %d.\n",(mid+1));
            return;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("Element not found.\n");
}
