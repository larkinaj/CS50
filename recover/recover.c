#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    typedef uint8_t BYTE;
    int images = 0;
    while (fread(&file, 1, BLOCK_SIZE, raw_file) == BLOCK_SIZE)
    {


    }
}