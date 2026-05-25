/*Try these operations on another variable by creating pointers in a separate program. Demonstrate all the four operations.*/
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    printf("Original values:\n");
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    // 1. Addition of a number to a pointer
    int *add_ptr = p1 + 1;  // This doesn't necessarily mean *add_ptr will point to 'b'
    printf("1. Addition to pointer (p1 + 1): Address = %u (Note: May not point to valid variable)\n", (void*)add_ptr);

    // 2. Subtraction of a number from a pointer
    int *sub_ptr = p3 - 1;
    printf("2. Subtraction from pointer (p3 - 1): Address = %u (Note: May not point to valid variable)\n", (void*)sub_ptr);

    // 3. Subtraction of one pointer from another
    int diff = p3 - p1;
    printf("3. Pointer difference (p3 - p1) = %d (elements apart)\n", diff);

    // 4. Comparison of two pointer variables
    printf("4. Comparison: ");
    if (p1 < p3)
        printf("p1 points to a lower address than p3\n");
    else if (p1 > p3)
        printf("p1 points to a higher address than p3\n");
    else
        printf("p1 and p3 point to the same address\n");

    return 0;
}

//done by chatgpt as i could not understand it well.