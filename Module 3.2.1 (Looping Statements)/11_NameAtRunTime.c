#include <stdio.h>

int main() {
    char people[5][20];
    for(int i = 0; i < 5; i++){
        printf("Enter person %d: ", i + 1); 
        scanf("%19s", people[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s\n", people[i]); 
    }
    return 0;
}
