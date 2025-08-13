#include <stdio.h>

// Function to solve Tower of Hanoi puzzle
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary rod using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);

    // Move n-1 disks from auxiliary to destination using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // A, B, C are names of rods
    towerOfHanoi(n, 'A', 'B', 'C');

    // Calculate total number of moves
    int total_moves = (1 << n) - 1; // 2^n - 1
    printf("\nTotal number of moves required: %d\n", total_moves);

    return 0;
}