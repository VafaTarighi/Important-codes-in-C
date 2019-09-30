#include <stdio.h>

int main(void) {
    int rep = 0;
    char word[100];
    scanf("%s", word);
    
    int length = 0;
    while(word[length] != '\0')
        length++;
        
        char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        char ABC[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        
        for(int i = 0; i < 26; i++) {
            int count = 0;
            for(int j = 0; j < length; j++) {
                if (abc[i] == word[j] || ABC[i] == word[j])
                    count++;
            }
            if (count > 1)
                rep++;
        }
        
        printf("%d", rep);
}
