int main() {
    int num = 42;
    printf("Before: %d\n", num);  // Output: Before: 42

    reset_to_98(&num);  // Pass the address of 'num' to the function

    printf("After: %d\n", num);  // Output: After: 98

    return 0;
}

