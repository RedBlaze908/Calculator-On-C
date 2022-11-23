#pragma warning (disable: 4996)
#include <stdio.h>

int main()
{
    int calculator, val, counter = 0, result_negative = 0, ex = 1;
    float n1, n2, ris, n3, n4, b, h, result, x, y;
    char op;

    printf("Calculator in C By RedBlaze908\n");

    printf("Type 1 to use the calculator\nType 2 to use greater, less or equal\nType 3 to find the area of a rectangle\nType 4 to find the area of a triangle\nType 5 sum only of the written negatives enter 0 for stop\n");
    printf("Type 6 to do the exponentiation\n");
    printf("Type the number: ");
    scanf("%d", &calculator);
    if (calculator == 1)
    {
        printf("Enter first value: ");
        scanf("%f", &n1);
        printf("Ender second value: ");
        scanf("%f", &n2);
        printf("Type the operator: ");
        scanf("%c", &op);
        printf("");
        scanf("%c", &op);

        printf("%0.2f %c %0.2f = ", n1, op, n2);

        if (op == '+') printf("%0.2f", n1 + n2);
        else if (op == '-') printf("%0.2f", n1 - n2);
        else if (op == 'x') printf("%0.2f", n1 * n2);
        else if (op == ':')
        {
            if (n2)
                printf("%0.2f", n1 / n2);
            else printf("You can't divide for 0");
        }
        else printf("failed calculation");
    }
    else if (calculator == 2)
    {
        printf("greater - less - equal\n");
        printf("Enter first value: ");
        scanf("%f", &n3);
        printf("Enter second value: ");
        scanf("%f", &n4);
        if (n3 < n4) printf("%0.2f is less than %0.2f", n3, n4);
        else if (n3 > n4) printf("%0.2f is bigger than %0.2f", n3, n4);
        else if (n3 == n4) printf("%0.2f is equal than %0.2f", n3, n4);
        else printf("failed calculation");

    }
    else if (calculator == 3)
    {
        printf("area of rectangle\n");
        printf("Type base: ");
        scanf("%f", &b);
        printf("Type hight: ");
        scanf("%f", &h);
        printf("result: %0.2f", b * h);

    }
    else if (calculator == 4)
    {
        printf("area of triangle\n");
        printf("Type base: ");
        scanf("%f", &b);
        printf("Type hight: ");
        scanf("%f", &h);
        printf("result: %0.2f", b * h / 2);

    }
    else if (calculator == 5)
    {
        printf("sum only of the written negatives\n");
        printf("Write the values:\n");
        scanf("%d", &val);

        while (val)
        {
            if (val < 0) result_negative += val;
            scanf("%d", &val);
            counter += 1;
        }
        printf("There are %d values\n", counter);
        printf("The sum of the negative numbers is: %d", result_negative);


    }
    else if (calculator == 6)
    {
        printf("exponentiation\n");
        printf("value: ");
        scanf("%f", &x);
        printf("exponent: ");
        scanf("%f", &y);

        result = x;

        while (ex != y)
        {
            result *= x;
            ex++;
        }
        printf("%0.2f", result);
    }

    return 0;
}
