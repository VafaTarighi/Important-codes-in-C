#include <stdio.h>

int main(void) {
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900};
    int n = 10;
    int mid = n/2;
    int ai = 0;
    int bi = 9;
    int found = 0;
    
    int target = 0;
    printf("Which number are you looking for? ");
    scanf("%d", &target);
    
    while (!found && (ai <= bi)) {
        mid = (ai + bi)/2;
        if (list[mid] == target)
            found = 1;
        else if (list[mid] > target)
            bi = mid - 1;
        else if (list[mid] < target)
            ai = mid + 1;
        
    }
    
    if (found)
        printf("Number %d was found at index %d in the array.\n", target, mid);
    else
        printf("Number %d was not found in the array. \n", target);
        
        return 0;
    
}
