#include <stdio.h>

int main() {
    char *str = "Hello World!";
    char *p = str, *q = str, c, d;
    c = *p;
    d = *q + '1';
    printf("%c%c\n", c, d);

    return (0);
}
