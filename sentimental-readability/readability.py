from cs50 import get_string

def main():
    input = get_string("Text: ")
    length = count_letters(input)
    words = count_words(input)
    sentences = count_sentences(input)
    grade = get_index(length, words, sentences)

    # Conditional statement to determine whether the reading level is less than 1 or greater than 15.
    if grade < 0.5:
        printf("Before Grade 1")
    elif grade > 15.4:
        print("Grade 16+")
    else:
        print(f"Grade: {int(grade)}:)

# Function to count the number of letters in the text.
def count_letters(input):
    int length = 0
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isalpha(input[i]))
        {
            length ++
        }
        else
        {
            length = length + 0
        }
    }
    return length

# Function to count the number of words in the text.
def count_words(input):
    int words = 0
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isspace(input[i]))
        {
            words ++
        }
        else
        {
            words = words + 0
        }
    }
    words ++
    return words

# Function to count the number of sentences in the text.
def count_sentences(input):
    int sentences = 0
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            sentences ++
        }
        else
        {
            sentences = sentences + 0
        }
    }
    return sentences

# Function to calculate the reading level using the Coleman-Liau index.
def get_index(length, words, sentences):
    grade = 0.0588 * length / words * 100 - 0.296 * sentences / words * 100 - 15.8
    return grade