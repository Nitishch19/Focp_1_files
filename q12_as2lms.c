//assignment 2 - q12 
/*WAP to implement delete-Front, any position in between & end in an array. Print
the array before delete & after delete*/
#include <stdio.h>

int main() {
    int ari[10];  // Array with space for more elements
    int size = 5; // Initial size of the array
    int position;
    char choice;

    // Input the initial elements into the array
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

    // Prompt user to choose deletion type
    printf("\nWhere to delete:\nFront - a\nBetween - b\nEnd - c\nEnter your choice: ");
    scanf(" %c", &choice);  // Space before %c to clear any leftover newline character

    switch (choice) {
        case 'a':  // Delete from the front
            // Shift elements to the left
            for (int i = 0; i < size - 1; i++) {
                ari[i] = ari[i + 1];
            }
            size--;  // Decrease the size of the array
            break;

        case 'b':  // Delete from a specific position
            printf("Enter the position (1 to %d): ", size);
            scanf("%d", &position);
            if (position < 1 || position > size) {
                printf("Invalid position!\n");
                return 1;
            }

            // Shift elements to the left from the given position
            for (int i = position - 1; i < size - 1; i++) {
                ari[i] = ari[i + 1];
            }
            size--;  // Decrease the size of the array
            break;

        case 'c':  // Delete from the end
            size--;  // Simply decrease the size, which removes the last element
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Display the updated array after deletion
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ari[i]);
    }
    printf("\n");

    return 0;
}
