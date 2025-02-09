#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = number + 10;
    printf("Result after adding 10: %d\n", result);
    
    return 0;
}
