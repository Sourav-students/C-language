//check if number is postive 
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    }
    return 0;
}

//check if number is Even 
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even.\n");
    }
    return 0;
}
