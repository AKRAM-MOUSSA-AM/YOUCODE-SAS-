#include <stdio.h>
#include <string.h>

int main() {
   char str[100], inv[100];
   int i, j, count = 0;
   printf("Entrezr une chaine : ");

   scanf("%s", str);


   while (str[count]!= '\0') {
      count++;
   }
   j = count - 1;

   for (i = 0; i < count; i++) {
      inv[i] = str[j];
      j--;
   }
   printf("chaine inverse :%s\n",inv);

   return 0;
}