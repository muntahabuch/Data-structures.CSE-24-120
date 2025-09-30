//traversal of an array
#include <stdio.h>

// Function prototypes
void insertAtEnd(int arr[], int *n, int value);
void insertAtBeginning(int arr[], int *n, int value);
void insertAtPosition(int arr[], int *n, int value, int position);
void printArray(int arr[], int n);

int main() {
    int arr[100], i, n, choice, value, position;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    printArray(arr, n);

    // Menu for insertion choice
    printf("\nWhere do you want to insert the element?\n");
    printf("1. At end\n");
    printf("2. At beginning\n");
    printf("3. At any position\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    switch (choice) {
        case 1:
            insertAtEnd(arr, &n, value);
            break;
        case 2:
            insertAtBeginning(arr, &n, value);
            break;
        case 3:
            printf("Enter the position (0 to %d): ", n);
            scanf("%d", &position);
            if (position < 0 || position > n) {
                printf("Invalid position!\n");
                return 1;
            }
            insertAtPosition(arr, &n, value, position);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("\nArray after insertion: ");
    printArray(arr, n);

    return 0;
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Insert at end
void insertAtEnd(int arr[], int *n, int value) {
    arr[*n] = value;
    (*n)++;
}

// Insert at beginning
void insertAtBeginning(int arr[], int *n, int value) {
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    (*n)++;
}

// Insert at a specific position
void insertAtPosition(int arr[], int *n, int value, int position) {
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*n)++;
}

