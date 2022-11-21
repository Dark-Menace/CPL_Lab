/* Sort the given set of N numbers using Bubble sort. */
#include<stdio.h>
int a[1],n,i=0;
void bubble(int a[],int n);
int pout(int a[],int n,int flag);
void main()
{ 
    int f=0;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {   
        i=0;
        printf("Enter the number of array elements:\n");
        scanf("%d",&n);
        while(getchar()!='\n');
        int a[n];
        printf("Enter the array elements:\n");
        while(i!=n)
        {
            scanf("%d",&a[i]);
            i++;
        }
        f=pout(a,n,f);
        bubble(a,n);
        f=pout(a,n,f);
        f=0;
        printf("\nDo you wish to continue:Y/N\n");
        scanf("%s",&ch);
        while(getchar()!='\n');
    }
    return;  
}
int pout(int a[],int n,int flag)
{
    if(flag==0)
    {
        printf("\nUnsorted array:\n");
        flag=1;
    }    
    else
    {
        printf("\nSorted array:\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        
    }
    return flag;
}
void bubble(int a[],int n)
{
    int j,temp;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}