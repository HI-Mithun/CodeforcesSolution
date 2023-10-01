#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int h=0, e=0, l=0, o=0;
    int len = strlen(s);

    for(int i=0; i<len; i++) {
        if (s[i] == 'h' && h == 0) {
            h++;
        } else if (s[i] == 'e' && h == 1 && e == 0) {
            e++;
        } else if (s[i] == 'l' && e == 1 && l < 2) {
            l++;
        } else if (s[i] == 'o' && l == 2 && o == 0) {
            o++;
        }

        if (h == 1 && e == 1 && l == 2 && o == 1) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
