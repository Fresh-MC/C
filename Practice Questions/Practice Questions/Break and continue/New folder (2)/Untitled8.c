#include <stdio.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
if (i == 7) {
break;
}
printf("%d ", i);
}
printf("\n");
return 0;
}
