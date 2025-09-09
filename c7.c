#include <stdio.h>
#include <string.h>
void flipping_a_word(char word[]) {
    int n = strlen(word);
    for (int i = 0; i < n/2; i++) {
        char temp = word[i];
        word[i] = word[n - i - 1];
        word[n - i - 1] = temp;
    }
}
int main(){
char word[100];
printf("enter a word : ");
fgets(word, sizeof(word), stdin);
flip_string(word);
printf("reversed : %s", word);
return 0;
}
