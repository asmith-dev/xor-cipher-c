#include <stdio.h>
#include <string.h>

// This function encrypts/decrypts a string using a key
unsigned char* cipher(unsigned char* str, unsigned char* key) {
    // Iterates through the string
    for (int i = 0; i < strlen(str); i++) {
        // Xor function
        str[i] ^= key[i%strlen(key)];
    }

    return str;
}

int main() {
    // Test example
    unsigned char text[] = {"The rain, in Spain, stays mainly in the plain."};
    unsigned char key[] = {";4h^ufe#D[K"};

    // Prints out results
    printf("%s\n", text);
    printf("%s\n", cipher(text, key));
    printf("%s\n", cipher(text, key));
}
