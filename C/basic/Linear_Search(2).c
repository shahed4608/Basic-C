#include<stdio.h>

int main() {
  int roll[20], size, search, i, index;
  printf("Number of element in the array: ");
  scanf("%d", &size);

  printf("Enter elements to the list: ");
  for (i = 0; i < size; i++)
    scanf("%d", &roll[i]);

  printf("Enter the desired element: ");
  scanf("%d", &search);
  for (index = 0; index < size; index++)
    if (roll[index] == search)
      break;

  if (index < size)
    printf("desired element found at index %d", index);
  else
    printf("desired element not found");

  return 0;
}

