#include <stdio.h>
int fact(int n) {
    if(n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main() {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= rows - i - 1; j++) {
            printf(" ");
        }
        for(j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
    return 0;
}
