#include "helpers.h"
#include <stdio.h>
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // nested for loop to iterate through each pixel of the image
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            float red = image[i][j].rgbtRed;
            float green = image[i][j].rgbtGreen;
            float blue = image[i][j].rgbtBlue;

            int average = round((red + green + blue) / sizeof(RGBTRIPLE));

            image[i][j].rgbtRed = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // nested for loop to iterate through each pixel of the image
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            float red = image[i][j].rgbtRed;
            float green = image[i][j].rgbtGreen;
            float blue = image[i][j].rgbtBlue;

            int sepiaRed = round((red * 0.393) + (green * 0.769) + (blue * 0.189));
            int sepiaGreen = round((red * 0.349) + (green * 0.686) + (blue * 0.168));
            int sepiaBlue = round((red * 0.272) + (green * 0.534) + (blue * 0.131));

            if  (sepiaRed > 255) {
                sepiaRed = 255;
            }
            if  (sepiaGreen > 255) {
                sepiaGreen = 255;
            }
            if  (sepiaBlue > 255) {
                sepiaBlue = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // nested for loop to iterate through each pixel of the image
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width / 2; j++) {

            int leftRed = image[i][j].rgbtRed;
            int rightRed = image[i][width - 1 - j].rgbtRed;
            image[i][width - 1 - j].rgbtRed = leftRed;
            image[i][j].rgbtRed = rightRed;

            int leftGreen = image[i][j].rgbtGreen;
            int rightGreen = image[i][width - 1 - j].rgbtGreen;
            image[i][width - 1 - j].rgbtGreen = leftGreen;
            image[i][j].rgbtGreen = rightGreen;

            int leftBlue = image[i][j].rgbtBlue;
            int rightBlue = image[i][width - 1 - j].rgbtBlue;
            image[i][width - 1 - j].rgbtBlue = leftBlue;
            image[i][j].rgbtBlue = rightBlue;
        }

    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
