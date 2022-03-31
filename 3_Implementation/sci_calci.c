#include<stdio.h>
#include<stdlib.h>
void output(float x, float y, char n, float res);
void add_num(float x, float y);
void sub_num(float x, float y);
void mul_num(float x, float y);
void divi_num(float x, float y);
void r_num(float x, float y);
void power_num(float x, float y);
int main()
{
  float x, y;
  int n;

  do{
    printf("Enter  the two numbers to undergo calculation: ");
    scanf("%f %f", &x, &y);

    printf("\n*****************");
    printf("\n1.Addition of  two numbers");
    printf("\n2.Subtraction of two numbers");
    printf("\n3.Multiplication of two numbers");
    printf("\n4.Division of two numbers");
    printf("\n5.Remainder of two numbers");
    printf("\n6.Power of two numbers");
    printf("\n7.Exit the program");
    printf("\nEnter your option for calculating........: ");
    scanf("%d", &n);

    switch (n) {
      case 1:
        add_num(x,y);
        break;
      case 2:
        sub_num(x,y);
        break;
      case 3:
        mul_num(x,y);
        break;
      case 4:
        divi_num(x,y);
        break;
      case 5:
        r_num(x,y);
        break;
      case 6:
        power_num(x,y);
        break;
      case 7:
        printf("Thank You for using my calculator");
        exit(0);
      default:
        printf("Input given by the user is invalid :-(");
        printf("Please try again with required input :->");
    }

    printf("\n******************next calculation to undergo****************\n");
  }while(1);

  return 0;
}
void output (float x, float y, char n, float res)
{
  printf("%.2f %c %.2f = %.2f\n", x, n, y, res);
}
void add_num(float x, float y)
{
  float res = x + y;
  output(x, y, '+', res);
}
void sub_num(float x, float y)
{
  float res = x - y;
  output(x, y, '-', res);
}
void mul_num(float x, float y)
{
  float res = x * y;
  output(x, y, '*', res);
}
void divi_num(float x, float y)
{
  float res = x / y;
  output(x, y, '/', res);
}
void r_num(float x, float y)
{
 
  int input1 = x;
  int input2 = y;
  int res = input1%input2;
  printf("%d %% %d = %d\n", input1, input2, res);
}
void power_num(float x, float y)
{
  if(y<0)
  printf("Second number should be +ve.");
  else
  {
    float res=1.0;
    for(int i=1; i<=y; i++)
    {
       res *= x;
    }
    output(x, y, '^', res);
  }
}

