#include <stdio.h>
int main() {
int data[4], stadd, readd, i;
char ch;
printf("Enter starting address\n");
scanf("%d", &stadd);
for (i = 0; i < 4; i++) {
printf("Enter value for byte %d: ", i);
scanf("%d", &data[i]);
}
do {
printf("\nEnter relocation address\n");
scanf("%d", &readd);
for (i = 0; i < 4; i++) {
printf("\nValue for %d = %d", readd + i, data[i]);
}
printf("\nDo you want to continue relocating (Y/N): ");
scanf(" %c", &ch);
} while (ch == 'Y' || ch == 'y');
return 0;
}
