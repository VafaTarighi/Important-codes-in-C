#include <stdio.h>

int main(void) {
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5};
    
    int n = 10;
    int i, j;
    
    printf("Unsorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n -(i + 1); j++) {
            if (list[j] > list[j + 1]) {
                int swap = list[j];
                list[j] = list[j + 1];
                list[j + 1] = swap;
            }
        }
    }
    
    printf("\nSorted list: \n");
    for (i=0; i<n; i++) {
        printf("%d ", list[i]);
    }
    
}
