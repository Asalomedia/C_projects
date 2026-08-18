#include <stdio.h>

int main() {
  int number; // Variable to store the user's number

  do {
    printf("Choose a number between 1 and 5: ");
    scanf("%d", &number); // Read number input
    char l=getchar();
    printf("last char is %c\n",l);
    while (l != '\n'); // Clear leftover characters from input buffer
  } while (number < 1 || number > 5); // Keep asking until number is between 1 and 5

  printf("You chose: %d\n", number); // Print the valid number
  return 0;
}