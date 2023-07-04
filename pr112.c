/*
 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
9   4
25 64
*/

#include<stdio.h>

void kirtan(int n, int m) {
    int a[n][m];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] => ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int *k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            a[i][j] = a[i][j] * a[i][j] * a[i][j];
            k = &a[i][j];
            printf("%d\n", *k);
        }
    }
}

int main() {
    int n, m;
    printf("Enter the size of row: ");
    scanf("%d", &n);
    printf("Enter the size of column: ");
    scanf("%d", &m);

    kirtan(n, m);

    return 0;
}
