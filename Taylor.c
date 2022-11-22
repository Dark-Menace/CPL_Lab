/* Compute sinx and cozx using Taylor series approximation.Compare
your result with built-in library function.Print both the results with
appropriate references.
sin x= x-(x^3)/3!+(x^5)/5!-(x^7)/7!+....
cos x= 1-(x^2)/2!+(x^4)/4!-(x^6)/6!+....  */
#include<stdio.h>
#include<math.h>
float tay_sin(float n);
float tay_cos(float n);
int fact(int t);
void main()
{
    char ch='y';
    int s;
    float deg,rad;
    while(ch=='Y'||ch=='y')
    {
        printf("Enter the angle in degree:\n");
        scanf("%f",&deg);
        rad=(deg/180)*3.142;
        printf("Enter '1' to find the sin of %.3f:\n",deg);
        printf("Enter '2' to find the cos of %.3f:\n",deg);
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            printf("The sin value using Taylors series: %f\n",tay_sin(rad));
            printf("The sin value using library function: %f\n",sin(rad));
            break;
            case 2:
            printf("The cos value using Taylors series: %.3f\n",tay_cos(rad));
            printf("The cos value using library function: %.3f\n",cos(rad));
            break;
            default:
            printf("Invalid choice.\n");
            break;
        }
        printf("Do you wish to continue:Y/N\n");
        scanf("%s",&ch);
        while(getchar()!='\n');
    }
    return;
}
float tay_sin(float n) //sin x= x-(x^3)/3!+(x^5)/5!-(x^7)/7!+....
{
    float sum=n,temp=sum;
    float i=3,j=1;
    do
    {   if(j/2!=0)
        {
            temp=-1;
        }
        else{
            temp=1;
        }
        temp*=(pow(n,i)/(fact(i)));
        sum+=temp;
        i+=2;
        j++;
    }while(fabs(temp)>0.000001);
    return sum;
}
float tay_cos(float n) //cos x= 1-(x^2)/2!+(x^4)/4!-(x^6)/6!+....
{
    float sum=1,temp=sum;
    float i=2,j=1;
    do
    {   
        if(j/2!=0)
        {
            temp=-1;
        }
        else{
            temp=1;
        }
        temp*=-(pow(n,i)/(fact(i)));
        sum+=temp;
        i+=2;
        j++;
    }while(fabs(temp)>0.000001);
    return sum;
    temp=1;
}
int fact(int t)
{
    int u,fa;
    for(u=1;u<t;u++)
    {
        fa*=u;
    }
    return fa;
}

