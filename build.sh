COMPILER=gcc
OUTPUT=main

SOURCES="main.c src/queue.c"
CFLAGS="-Wall -Wextra -std=c99"

if ! command -v $COMPILER >/dev/null 2>&1; then
    echo "Error: GCC compiler not found. Please install GCC."
    exit 1
fi

echo "Compiling..."
$COMPILER $CFLAGS $SOURCES -o $OUTPUT

if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

echo "Compilation successful! Run ./$OUTPUT to execute."