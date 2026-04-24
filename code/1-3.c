#include <stdio.h>

char *my_strcat(char *dst, const char *src) {
    int len_dst = 0;
    while (dst[len_dst] != '\0')
        len_dst++;

    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dst[len_dst + i] = src[i];
    }
    dst[len_dst + i] = '\0';
    return dst;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";
    
    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}