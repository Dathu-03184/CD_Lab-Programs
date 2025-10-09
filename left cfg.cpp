#include <stdio.h>

int main() {
    printf("Original Grammar:\n");
    printf("S ? (L) | a\n");
    printf("L ? L , S | S\n\n");

    printf("Grammar after eliminating left recursion:\n");
    printf("S  ? (L) | a\n");
    printf("L  ? S L'\n");
    printf("L' ? , S L' | e\n");

    return 0;
}

