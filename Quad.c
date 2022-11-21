/* Compute the roots of a quadratic equation by accepting
the co-efficients .Print appropriate messages. */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void roots(float a,float b,float c);
void main()
{
    char ch='Y';
    float x,y,z;
    while(ch=='Y'||ch=='y')
    {
        printf("Enter the co-efficients of the quadratic equation: a,b,c :\n");
        scanf("%f%f%f",&x,&y,&z);
        roots(x,y,z);
        printf("Do you wish to continue? Y/N:\n");
        scanf("%s",&ch);
    }
}

void roots(float a,float b,float c)
{   
    if (a==0)
    {printf("Invalid equation.\n");
    return;  
    }
    float root1,root2,real,dis,img;
    dis=pow(b,2)-(4*a*c);
    if (dis>0)
    {
        printf("The roots are real and distinct.\n");
        root1=(-b+dis)/(2*a);  
        root2=(-b-dis)/(2*a);
        printf("The roots are:%.2f and %.2f.\n",root1,root2);  
    }
    else if (dis==0)
    {
        printf("The roots are real and equal.\n");
        root1=-b/(2*a);  
        printf("The roots are:%.2f and %.2f.\n",root1,root1);
    }
    else
    {
        printf("The roots are real and imaginary.\n");
        real=-b/(2*a);  
        img=sqrt(fabs(dis))/(2*a);
        printf("The roots are:%.2f+%.2fi and %.2f-%.2fi.\n",real,img,real,img);
    }
    
}


