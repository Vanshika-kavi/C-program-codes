#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>

void deleteSubstring(char *text, const char *substring) {
    int len = strlen(substring);
    char *ptr = text;

    while ((ptr = strstr(ptr, substring)) != NULL) {
        memmove(ptr, ptr + len, strlen(ptr + len) + 1);
    }
}

int main() {
    char text[1000], substring[100];

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the substring to delete: ");
    fgets(substring, sizeof(substring), stdin);

    text[strcspn(text, "\n")] = '\0';
    substring[strcspn(substring, "\n")] = '\0';

    deleteSubstring(text, substring);

    printf("Text after deleting the substring: %s\n", text);

    return 0;
}

