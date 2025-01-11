//Stack operation using array

#include <stdio.h>
#include <stdlib.h>

int push(int a[], int top) {
    int ele;
    if (top == 4) { 
        printf("Array is full\n");
        return top;
    }
    top++;
    printf("Enter the element to add: ");
    scanf("%d", &ele);
    a[top] = ele;
    printf("%d added to the stack\n", a[top]);
    return top;
}

int pop(int a[], int top) {
    if (top == -1) {
        printf("Array is empty\n");
        return top;
    }
    printf("%d popped from the stack\n", a[top]); 
    top--;
    return top;
}

void traversal(int a[], int top) { 
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements are: ");
    for (int i = 0; i <= top; i++) { 
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() { 
    int top = -1, a[5];
    int choice;
    printf("\nStack Operations\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    
    while (1) {
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                top = push(a, top);
                break;
            case 2:
                top = pop(a, top);
                break;
            case 3:
                traversal(a, top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0; 
}