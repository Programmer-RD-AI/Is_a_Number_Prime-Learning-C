#include <stdio.h>

int prime(int num)
{   // 14.5
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int prime_number = 0;
    printf("Enter a prime number : ");
    scanf("%d", &prime_number);
    printf("%d is a %d Prime number (0 = False, 1 = True)", prime_number, prime(prime_number));
}
