 #include <stdio.h>
  int main()
  {

      char ch;
      int num1,num2;

      printf("choose the operator (+,-,*,/,%%): ");
      scanf("%c",&ch);

      printf("Enter two numbers: ");
      Scanf("%d %d",&num1,&num2);

      switch(ch)
      {
        case '+':
            printf("%d + %d =\t%d\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d - %d =\t%d\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d =\t%d\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d / %d =\t%d\n",num1,num2,num1/num2);
            break;
        case '%':
            printf("%d %% %d =\t%d\n",num1,num2,num1%num2);
            break;
        default:
            printf("Error! Invalid Operator.");
      }

    return 0;


  }

