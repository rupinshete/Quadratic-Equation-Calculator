#include <stdio.h>
#include<math.h>
int main()
{
    // declare local variables
    char opt;
    double n1,n2,n3,discriminant, root1, root2;
    float res;
    printf ("Select an operator (+, -, *, /,q) to perform an operation in C calculator \n");
    scanf ("%c", &opt); // take an operator
    printf ("Enter the first number:");
    scanf("%lf", &n1); // take fist number
    printf ("Enter the second number:");
    scanf ("%lf", &n2); // take second number
    {
        if (opt == '+')
        {
            res = n1 + n2; // add two numbers
            printf ("Addition of %lf and %lf is:%f", n1, n2, res);
        }

        else if (opt == '-')
        {
            res = n1 - n2; // subtract two numbers
            printf ("Subtraction of %lf and %lf is:%f", n1, n2, res);
        }

        else if (opt == '*')
        {
            res = n1 * n2; // multiply two numbers
            printf ("Multiplication of %lf and %lf is:%f", n1, n2, res);
        }

        else if (opt == '/')
        {
            if (n2 == 0)   // if n2 == 0, take another number
            {
                printf ("\nDivisor cannot be zero.\n Please enter another value:");
                scanf ("%lf", &n2);
            }
            res = n1 / n2; // divide two numbers
            printf ("Division of %lf and %lf is:%.2f", n1, n2, res);
        }
        else if(opt == 'q')
        {
            printf("Enter the third number:");
            scanf("%lf",&n3);
            discriminant = n2 * n2 - 4 * n1 * n3;
            if (discriminant > 0) {
                root1 = (-n2 + sqrt(discriminant)) / (2 * n1);
                root2 = (-n2 - sqrt(discriminant)) / (2 * n1);
                printf("The roots are %.2lf and %.2lf", root1, root2);
            }
            else if (discriminant == 0) {
                root1 = root2 = -n2/(2 * n1);
                printf("root1 = root2 = %lf %lf", root1, root2);
            }
            else {
                printf("The quadratic equation has no real roots.");
            }
        }
        else
        {
            printf(" \nYou have entered wrong inputs.");
        }
        return 0;
    }
}



