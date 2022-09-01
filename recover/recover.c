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
    FILE *output = NULL;
    unsigned char buffer[512];
    int images = 0;
    char *filename = malloc(8 * sizeof(char));

    while (fread(buffer, sizeof(char), 512, file))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (images > 0)
            {
                fclose(output);
            }

            sprintf(filename, "%03i.jpg", images);

            output = fopen(filename, "w");

            images ++;
        }

        if (output != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output);
        }
    }

    free(filename);
    fclose(output);
    fclose(file);

    return 0;
}