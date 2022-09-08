import csv
import sys


def main():

    # Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # Read database file into a variable
    database = open(sys.argv[1], "r")
    csv_reader = csv.reader(database)
    firstRow = next(csv_reader)
    # firstRow.pop(0)

    # Read DNA sequence file into a variable
    dna = open(sys.argv[2], "r").read()

    # Find longest match of each STR in DNA sequence
    strList = []
    matches = ["match"]
    for i in range(len(firstRow)):
        if i != 0:
            matches.append("unmatch")
        strList.append(longest_match(dna, firstRow[i]))

    print(matches)

    # todo: Check database for matching profiles
    for row in csv_reader:
        for i in range(1, len(row)):
            print(i)
            print(f"str: {strList[i]}")
            print(f"row: {row[i]}")
            if int(row[i]) == strList[i]:
                matches[i] = "match"
    print(matches)
    if "unmatch" not in matches:
        print("we have a match!!!!!!!!!!")
    return


def longest_match(sequence, subsequence):
    # Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
