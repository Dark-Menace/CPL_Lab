/* An elctricity board charges the following rates for the use of electricity:
For the first 200 units 80 paise per unit
For the next 100 units 90 paise per unit
Beyond 300 units Rs. 1 per unit.
All users are charged a minimum of Rs. 100 as meter charge.
If the total amount is more than Rs 400,then an additional surcharge of 15% of the
total amount is charged.Write a program to read the name of the user,the number of
units consumed and print out the charges. */

#include<stdio.h>

typedef struct Customer{
    char name[40];
    int units;
}cust;

void elec(cust c1);

void main()
{
    cust C;
    char ch='y';
    while(ch=='Y'||ch=='y')
    {
        printf("Enter the customer's name:\n");
        fgets(C.name,40,stdin);
        printf("Enter the units consumed:\n");
        scanf("%d",&C.units);
        if(C.units<0)
        {
            printf("The units consumed cannot be negative.\n");
        }
        else
        {
            elec(C);
        }
        printf("Do you wish to continue:Y/N\n");
        scanf("%s",&ch);
        while (getchar() != '\n');
    }
}
void elec(cust c1)
{   
    float amt;
    if(c1.units<=200)
        amt=100+(c1.units*0.8);
    else if(c1.units<=300)
        amt=100+(200*0.8)+(c1.units-200)*0.9;
    else    
        amt=100+(200*0.8)+(100*0.9)+(c1.units-300)*1;
    if (amt>400)
        amt+=0.15*amt;
    printf("The details customer details are:\n");
    printf("Name:%s\n",c1.name);
    printf("Units consumed:%d\n",c1.units);
    printf("Amount calculated:%.3f\n",amt);    
}