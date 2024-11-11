#include <iostream>

int main()
{
    int number;

    
    do {
        printf("Please enter number that's between [1 ... 56]: ");
        scanf_s("%d", &number);

        if (number < 1 || number > 56) {
            printf("The number that you enter is false, please try again\n");
        }
    } while (number < 1 || number > 56);

    printf("The number you enter is : %d", number);
}
