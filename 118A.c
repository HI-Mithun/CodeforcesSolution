#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
            continue;
        } else {
            printf(".%c", ch);
        }
    }

    printf("\n");

    return 0;
}
