#include <stdio.h>
int main() {
    FILE *fptr;
    int data[10];
    fptr = fopen("text.txt", "r");
    for (int i = 0; i < 10; i++) {
        fscanf(fptr, "%d", &data[i]);
        }
    fclose(fptr);
    printf("Data read from file:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);}
    return 0;}
