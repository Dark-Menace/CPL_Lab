/*  Develop a program to solve simple computational problems using
 arithematic expressions and use of each operator leading to simulation 
 of a commercial calculator. */
 
 #include<stdio.h>
 void Calc(char op);

 int main()
{
    char ch='Y', op;

    while((ch=='Y') || (ch=='y'))
    {
    printf("Enter '+' for Addition: \n");
    printf("Enter '-' for Subtraction: \n");
    printf("Enter '*' for Multiplication: \n");
    printf("Enter '/' for Division: \n");
    printf("Choice:\n");
    scanf("%s",&op);
    Calc(op);
    printf("Do you wish to continue:Y/N :\n");
    scanf("%s",&ch);
    
    }
    
    return 0;   
}

void Calc(char op)
{   int a,b;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
            printf("The sum is %d \n",(a+b));
            break;
        case '-':
            printf("The difference is %d \n",(a-b));
            break;
        case '*':
            printf("The  product is %d \n",(a*b));
            break;
        case '/':
            if(b==0)
            printf("Division by 0 is impossible.\n");
            else
            printf("The quotient is %d \n",(int)(a/b));
            break;
        default:
            printf("Wrong operator.\n");
            break;

    }
}
