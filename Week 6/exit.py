import sys

if len(sys.argv) != 2:
    print("Missing command line arg")
    sys.exit(1)

print("Hello " + sys.argv[1])
sys.exit(0)