#include <stdio.h>

int count = 0;

void tower(int n, char source, char dest, char temp)
{
    if (n == 0)
        return;

    tower(n - 1, source, temp, dest);

    count++;

    printf("Move %d disk from %c to %c\n", n, source, dest);

    tower(n - 1, temp, dest, source);
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'C', 'B');

    printf("Total moves = %d\n", count);

    return 0;
}
