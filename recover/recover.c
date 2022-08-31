#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");

    int images = 0;
    unsigned char buffer[512];
    FILE *output = NULL;
    char *filename = malloc(8 * sizeof(char));
    while (fread(buffer, sizeof(char), sizeof(buffer), file))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(filename, "%03i.jpg", images);

            output = fopen(filename, "w");

            images ++;
        }
    }
    free(filename);
    fclose(output);
    fclose(file);

    return 0;
}