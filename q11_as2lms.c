//assignment 2 - q11
/*WAP to implement Insert - Front, any position in between & end in an array. Print
the array before insert & after insert.*/
#include <stdio.h>
int main() {
    int ari[10]; 
    int size = 5;
    int y, p;
    char x;

    // Input initial array elements
    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &ari[i]);
    }

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ari[i]);
    }
    printf("\n");

    // Prompt user to choose insertion type
    printf("\nWhere to insert:\nFront - a\nBetween - b\nEnd - c\nEnter your choice: ");
    scanf(" %c", &x);  // Add space before %c to consume any leftover newline character

    switch (x) {
        case 'a':  // Insert at the front
            printf("Enter the value to insert at the front: ");
            scanf("%d", &y);
            
            // Shift elements to the right
            for (int i = size; i > 0; i--) {
                ari[i] = ari[i - 1];
            }
            ari[0] = y;  // Insert at the front
            size++;      // Increase the array size
            break;

        case 'b':  // Insert at a specific position
            printf("Enter the position (1 to %d): ", size);
            scanf("%d", &p);
            if (p < 1 || p > size + 1) {
                printf("Invalid position!\n");
                return 1;
            }
            printf("Enter the value to insert at position %d: ", p);
            scanf("%d", &y);

            // Shift elements to the right from the position
            for (int i = size; i >= p; i--) {
                ari[i] = ari[i - 1];
            }
            ari[p - 1] = y;  // Insert the element
            size++;          // Increase the array size
            break;

        case 'c':  // Insert at the end
            printf("Enter the value to insert at the end: ");
            scanf("%d", &y);
            ari[size] = y;  // Insert at the end
            size++;         // Increase the array size
            break;

        default:
            printf("Invalid choice.\n");
    }

    // Display the updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ari[i]);
    }
    printf("\n");

    return 0;
}


