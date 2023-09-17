#include <stdio.h>

int main()
{
    int user;
    user = menu();
    arith(user);
    return 0;
};

int menu()
{
    int user;
    printf("1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    printf("Type a number to select function(1-4): ");
    scanf("%d", &user);
    return user;
}

void arith(int choice)
{
    int a = getDate();
    int b = getDate();
    if (choice == 1)
    {
        add(a, b);
    }
    else if (choice == 2)
    {
        sub(a, b);
    }
    else if (choice == 3)
    {
        mul(a, b);
    }
    else if (choice == 4)
    {
        div(a, b);
    }
}

int getDate()
{
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    return num;
}

void div(int a, int b)
{
    int result;
    if (b == 0)
    {
        result = 0;
        printf("%d", result);
    }
    else
    {
        result = a / b;
        printf("%f", result);
    }
}

void mul(int a, int b)
{
    int result = a * b;
    printf("%d", result);
}

void add(int a, int b)
{
    int result = a + b;
    printf("%d", result);
}

void sub(int a, int b)
{
    int result = a - b;
    printf("%d", result);
}