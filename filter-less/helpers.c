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
    // nested for loop to iterate through each pixel of the image
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {


            if (i == 0 && j == 0) {
                image[i][j].rgbtRed = round((image[i][j + 1].rgbtRed + image[i + 1][j + 1].rgbtRed + image[i + 1][j].rgbtRed) / sizeof(RGBTRIPLE));
                image[i][j].rgbtGreen = round((image[i][j + 1].rgbtGreen + image[i + 1][j + 1].rgbtGreen + image[i + 1][j].rgbtGreen) / sizeof(RGBTRIPLE));
                image[i][j].rgbtBlue = round((image[i][j + 1].rgbtBlue + image[i + 1][j + 1].rgbtBlue + image[i + 1][j].rgbtBlue) / sizeof(RGBTRIPLE));
            }
            else if (i == 0 && j == width - 1) {
                image[i][j].rgbtRed = round((image[i][j + 1].rgbtRed + image[i + 1][j + 1].rgbtRed + image[i + 1][j].rgbtRed) / sizeof(RGBTRIPLE));
                image[i][j].rgbtGreen = round((image[i][j + 1].rgbtGreen + image[i + 1][j + 1].rgbtGreen + image[i + 1][j].rgbtGreen) / sizeof(RGBTRIPLE));
                image[i][j].rgbtBlue = round((image[i][j + 1].rgbtBlue + image[i + 1][j + 1].rgbtBlue + image[i + 1][j].rgbtBlue) / sizeof(RGBTRIPLE));
            }
            else if (i == height - 1 && j == 0) {

            }
            else if (i == height - 1 && j == width - 1) {

            }
            else if (i == 0) {

            }
            else if (i == height - 1) {

            }
            else if (j == 0) {

            }
            else if (j == width - 1) {

            }
            else {
                float upperLeftRed = image[i - 1][j - 1].rgbtRed;
                float upperMidRed = image[i - 1][j].rgbtRed;
                float upperRightRed = image[i - 1][j + 1].rgbtRed;
                float leftRed = image[i][j - 1].rgbtRed;
                float rightRed = image[i][j + 1].rgbtRed;
                float lowerLeftRed = image[i + 1][j - 1].rgbtRed;
                float lowerMidRed = image[i + 1][j].rgbtRed;
                float lowerRightRed = image[i + 1][j + 1].rgbtRed;

                float upperLeftGreen = image[i - 1][j - 1].rgbtGreen;
                float upperMidGreen = image[i - 1][j].rgbtGreen;
                float upperRightGreen = image[i - 1][j + 1].rgbtGreen;
                float leftGreen = image[i][j - 1].rgbtGreen;
                float rightGreen = image[i][j + 1].rgbtGreen;
                float lowerLeftGreen = image[i + 1][j - 1].rgbtGreen;
                float lowerMidGreen = image[i + 1][j].rgbtGreen;
                float lowerRightGreen = image[i + 1][j + 1].rgbtGreen;

                float upperLeftBlue = image[i - 1][j - 1].rgbtBlue;
                float upperMidBlue = image[i - 1][j].rgbtBlue;
                float upperRightBlue = image[i - 1][j + 1].rgbtBlue;
                float leftBlue = image[i][j - 1].rgbtBlue;
                float rightBlue = image[i][j + 1].rgbtBlue;
                float lowerLeftBlue = image[i + 1][j - 1].rgbtBlue;
                float lowerMidBlue = image[i + 1][j].rgbtBlue;
                float lowerRightBlue = image[i + 1][j + 1].rgbtBlue;

                image[i][j].rgbtRed = round((upperLeftRed + upperMidRed + upperRightRed + leftRed + rightRed + lowerLeftRed + lowerMidRed + lowerRightRed) / 9);
                image[i][j].rgbtGreen = round((upperLeftGreen + upperMidGreen + upperRightGreen + leftGreen + rightGreen + lowerLeftGreen + lowerMidGreen + lowerRightGreen) / 9);
                image[i][j].rgbtBlue = round((upperLeftBlue + upperMidBlue + upperRightBlue + leftBlue + rightBlue + lowerLeftBlue + lowerMidBlue + lowerRightBlue) / 9);
            }
        }

    }
    return;
}
