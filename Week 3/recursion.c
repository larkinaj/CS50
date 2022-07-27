#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void draw(int n, int newHeight);

int main(void)
{
    int height = get_int("Height: ");

    draw(height, 1);

}

// void draw(int n)
// {
//     if (n <= 0) {
//         return;
//     }

//     draw(n - 1);

//     for (int i = 0; i < n; i++) {
//         printf("#");
//     }
//     printf("\n");
// }


void draw(int n, int currentRow)
{
  if (n < currentRow) {
      return;
  }
  for (int i = 0; i < currentRow; i++) {
      printf("#");
  }
  printf("\n");
  currentRow ++;

  draw(n, currentRow);
}