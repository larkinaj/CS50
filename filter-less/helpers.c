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
    // declaring a new 2 dimensional array to store a copy of each pixel
    RGBTRIPLE copy[height][width];
    // nested for loop to copy each pixel of the image to the new 2 dimensional array
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            copy[i][j] = image[i][j];
        }
    }

    // nested for loop to iterate through each pixel of the image
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            float currRed = copy[i][j].rgbtRed;
            float currGreen = copy[i][j].rgbtGreen;
            float currBlue = copy[i][j].rgbtBlue;

            if (i == 0 && j == 0) {
                image[i][j].rgbtRed = round((currRed + copy[i][j + 1].rgbtRed + copy[i + 1][j + 1].rgbtRed + copy[i + 1][j].rgbtRed) / 4);
                image[i][j].rgbtGreen = round((currGreen + copy[i][j + 1].rgbtGreen + copy[i + 1][j + 1].rgbtGreen + copy[i + 1][j].rgbtGreen) / 4);
                image[i][j].rgbtBlue = round((currBlue + copy[i][j + 1].rgbtBlue + copy[i + 1][j + 1].rgbtBlue + copy[i + 1][j].rgbtBlue) / 4);
            }
            else if (i == 0 && j == width - 1) {
                image[i][j].rgbtRed = round((currRed + copy[i][j - 1].rgbtRed + copy[i + 1][j - 1].rgbtRed + copy[i + 1][j].rgbtRed) / 4);
                image[i][j].rgbtGreen = round((currGreen + copy[i][j - 1].rgbtGreen + copy[i + 1][j - 1].rgbtGreen + copy[i + 1][j].rgbtGreen) / 4);
                image[i][j].rgbtBlue = round((currBlue + copy[i][j - 1].rgbtBlue + copy[i + 1][j - 1].rgbtBlue + copy[i + 1][j].rgbtBlue) / 4);
            }
            else if (i == height - 1 && j == 0) {
                image[i][j].rgbtRed = round((currRed + copy[i][j + 1].rgbtRed + copy[i - 1][j + 1].rgbtRed + copy[i - 1][j].rgbtRed) / 4);
                image[i][j].rgbtGreen = round((currGreen + copy[i][j + 1].rgbtGreen + copy[i - 1][j + 1].rgbtGreen + copy[i - 1][j].rgbtGreen) / 4);
                image[i][j].rgbtBlue = round((currBlue + copy[i][j + 1].rgbtBlue + copy[i - 1][j + 1].rgbtBlue + copy[i - 1][j].rgbtBlue) / 4);
            }
            else if (i == height - 1 && j == width - 1) {
                image[i][j].rgbtRed = round((currRed + copy[i][j - 1].rgbtRed + copy[i - 1][j - 1].rgbtRed + copy[i - 1][j].rgbtRed) / 4);
                image[i][j].rgbtGreen = round((currGreen + copy[i][j - 1].rgbtGreen + copy[i - 1][j - 1].rgbtGreen + copy[i - 1][j].rgbtGreen) / 4);
                image[i][j].rgbtBlue = round((currBlue + copy[i][j - 1].rgbtBlue + copy[i - 1][j - 1].rgbtBlue + copy[i - 1][j].rgbtBlue) / 4);
            }
            else if (i == 0) {
                image[i][j].rgbtRed = round((currRed + copy[i][j + 1].rgbtRed + copy[i + 1][j + 1].rgbtRed + copy[i + 1][j].rgbtRed + copy[i + 1][j - 1].rgbtRed + copy[i][j - 1].rgbtRed) / 6);
                image[i][j].rgbtGreen = round((currGreen + copy[i][j + 1].rgbtGreen + copy[i + 1][j + 1].rgbtGreen + copy[i + 1][j].rgbtGreen + copy[i + 1][j - 1].rgbtGreen + copy[i][j - 1].rgbtGreen) / 6);
                image[i][j].rgbtBlue = round((currBlue + copy[i][j + 1].rgbtBlue + copy[i + 1][j + 1].rgbtBlue + copy[i + 1][j].rgbtBlue + copy[i + 1][j - 1].rgbtBlue + copy[i][j - 1].rgbtBlue) / 6);
            }
            else if (i == height - 1) {
                image[i][j].rgbtRed = round((currRed + copy[i][j - 1].rgbtRed + copy[i - 1][j - 1].rgbtRed + copy[i - 1][j].rgbtRed + copy[i - 1][j + 1].rgbtRed + copy[i][j + 1].rgbtRed) / 6);
                image[i][j].rgbtGreen = round((currGreen + copy[i][j - 1].rgbtGreen + copy[i - 1][j - 1].rgbtGreen + copy[i - 1][j].rgbtGreen + copy[i - 1][j + 1].rgbtGreen + copy[i][j + 1].rgbtGreen) / 6);
                image[i][j].rgbtBlue = round((currBlue + copy[i][j - 1].rgbtBlue + copy[i - 1][j - 1].rgbtBlue + copy[i - 1][j].rgbtBlue + copy[i - 1][j + 1].rgbtBlue + copy[i][j + 1].rgbtBlue) / 6);
            }
            else if (j == 0) {
                image[i][j].rgbtRed = round((currRed + copy[i - 1][j].rgbtRed + copy[i - 1][j + 1].rgbtRed + copy[i][j + 1].rgbtRed + copy[i + 1][j + 1].rgbtRed + copy[i + 1][j].rgbtRed) / 6);
                image[i][j].rgbtGreen = round((currGreen + copy[i - 1][j].rgbtGreen + copy[i - 1][j + 1].rgbtGreen + copy[i][j + 1].rgbtGreen + copy[i + 1][j + 1].rgbtGreen + copy[i + 1][j].rgbtGreen) / 6);
                image[i][j].rgbtBlue = round((currBlue + copy[i - 1][j].rgbtBlue + copy[i - 1][j + 1].rgbtBlue + copy[i][j + 1].rgbtBlue + copy[i + 1][j + 1].rgbtBlue + copy[i + 1][j].rgbtBlue) / 6);
            }
            else if (j == width - 1) {
                image[i][j].rgbtRed = round((currRed + copy[i - 1][j].rgbtRed + copy[i - 1][j - 1].rgbtRed + copy[i][j - 1].rgbtRed + copy[i + 1][j - 1].rgbtRed + copy[i + 1][j].rgbtRed) / 6);
                image[i][j].rgbtGreen = round((currGreen + copy[i - 1][j].rgbtGreen + copy[i - 1][j - 1].rgbtGreen + copy[i][j - 1].rgbtGreen + copy[i + 1][j - 1].rgbtGreen + copy[i + 1][j].rgbtGreen) / 6);
                image[i][j].rgbtBlue = round((currBlue + copy[i - 1][j].rgbtBlue + copy[i - 1][j - 1].rgbtBlue + copy[i][j - 1].rgbtBlue + copy[i + 1][j - 1].rgbtBlue + copy[i + 1][j].rgbtBlue) / 6);
            }
            else {
                float upperLeftRed = copy[i - 1][j - 1].rgbtRed;
                float upperMidRed = copy[i - 1][j].rgbtRed;
                float upperRightRed = copy[i - 1][j + 1].rgbtRed;
                float leftRed = copy[i][j - 1].rgbtRed;
                float rightRed = copy[i][j + 1].rgbtRed;
                float lowerLeftRed = copy[i + 1][j - 1].rgbtRed;
                float lowerMidRed = copy[i + 1][j].rgbtRed;
                float lowerRightRed = copy[i + 1][j + 1].rgbtRed;

                float upperLeftGreen = copy[i - 1][j - 1].rgbtGreen;
                float upperMidGreen = copy[i - 1][j].rgbtGreen;
                float upperRightGreen = copy[i - 1][j + 1].rgbtGreen;
                float leftGreen = copy[i][j - 1].rgbtGreen;
                float rightGreen = copy[i][j + 1].rgbtGreen;
                float lowerLeftGreen = copy[i + 1][j - 1].rgbtGreen;
                float lowerMidGreen = copy[i + 1][j].rgbtGreen;
                float lowerRightGreen = copy[i + 1][j + 1].rgbtGreen;

                float upperLeftBlue = copy[i - 1][j - 1].rgbtBlue;
                float upperMidBlue = copy[i - 1][j].rgbtBlue;
                float upperRightBlue = copy[i - 1][j + 1].rgbtBlue;
                float leftBlue = copy[i][j - 1].rgbtBlue;
                float rightBlue = copy[i][j + 1].rgbtBlue;
                float lowerLeftBlue = copy[i + 1][j - 1].rgbtBlue;
                float lowerMidBlue = copy[i + 1][j].rgbtBlue;
                float lowerRightBlue = copy[i + 1][j + 1].rgbtBlue;

                image[i][j].rgbtRed = round((currRed + upperLeftRed + upperMidRed + upperRightRed + leftRed + rightRed + lowerLeftRed + lowerMidRed + lowerRightRed) / 9);
                image[i][j].rgbtGreen = round((currGreen + upperLeftGreen + upperMidGreen + upperRightGreen + leftGreen + rightGreen + lowerLeftGreen + lowerMidGreen + lowerRightGreen) / 9);
                image[i][j].rgbtBlue = round((currBlue + upperLeftBlue + upperMidBlue + upperRightBlue + leftBlue + rightBlue + lowerLeftBlue + lowerMidBlue + lowerRightBlue) / 9);
            }
        }
    }
    return;
}
