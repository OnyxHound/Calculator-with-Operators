#include <stdio.h>
#include <stdlib.h>

double getInput();
double numCalculator(double x, double y);

int main()
{
  system("color 2");
  while(1)
  {
    double num, num2, result;
    char option;

    num = getInput();
    num2 = getInput();
    result = numCalculator(num, num2);

    printf("[ Would you like to continue? ]\n ");
    scanf("%s%*c", &option);
    if(option == 'y')
    {
       continue;
    }
    else if(option == 'n')
    {
       printf("See you later!");
       break;
    }
  }

    return 0;
}


double getInput()
{
   double num;

    printf("[ Please enter a number: ]\n ");
    scanf("%lf%*c", &num);

    return num;
}

double numCalculator(double x, double y)
{
    double total;
    char op;

    printf("[ Enter an operator: ]\n ");
    scanf("%s%*c", &op);

    if(op == '+')
    {
        total = x + y;
    }
    else if(op == '-')
    {
        total = x - y;
    }
    else if(op == '/')
    {
        total = x / y;
    }
    else if(op == '*')
    {
        total = x * y;
    }

    printf("[ Your result is: %lf ]\n ", total);


  return total;
}
