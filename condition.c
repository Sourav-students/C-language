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

// Print a Message for Adult Age
#include <stdio.h>

int main() {
    int age;
    printf("Enter a number: ");
    scanf("%d", &age);
    if (age <= 18) {
        printf("you are adult.\n");
    }
    return 0;
}
