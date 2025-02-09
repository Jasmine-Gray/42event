#include <stdio.h>

// This function implements the assembly code logic of "check_flag"
// It takes a pointer to a constant char array (a C string) as input
// and checks if each byte in the string matches the expected value.
// If all comparisons succeed, it returns 1; otherwise, it returns 0.
int check_flag(const char *flag) {
    // Equivalent to: push rbp; mov rbp, rsp;
    // Store the pointer argument in a local variable "input"
    const char *input = flag;

    // 1121: movzx eax,BYTE PTR [rax]
    // 1128: cmp al,0x34   -> Check if input[0] equals 0x34 ('4')
    if (input[0] != 0x34) {  // 0x34 is ASCII for '4'
        // 112c: mov eax,0x0 and jump to function epilogue
        return 0;
    }

    // 1136: Check if input[1] equals 0x32 ('2')
    if (input[1] != 0x32) {  // 0x32 is ASCII for '2'
        return 0;
    }

    // 114f: Check if input[2] equals 0x43 ('C')
    if (input[2] != 0x43) {  // 0x43 is ASCII for 'C'
        return 0;
    }

    // 1168: Check if input[3] equals 0x54 ('T')
    if (input[3] != 0x54) {  // 0x54 is ASCII for 'T'
        return 0;
    }

    // 1181: Check if input[4] equals 0x46 ('F')
    if (input[4] != 0x46) {  // 0x46 is ASCII for 'F'
        return 0;
    }

    // 119a: Check if input[5] equals 0x7b ('{')
    if (input[5] != 0x7b) {  // 0x7b is ASCII for '{'
        return 0;
    }

    // 11b3: Check if input[6] equals 0x33 ('3')
    if (input[6] != 0x33) {  // 0x33 is ASCII for '3'
        return 0;
    }

    // 11cc: Check if input[7] equals 0x34 ('4')
    if (input[7] != 0x34) {  // 0x34 is ASCII for '4'
        return 0;
    }

    // 11e5: Check if input[8] equals 0x73 ('s')
    if (input[8] != 0x73) {  // 0x73 is ASCII for 's'
        return 0;
    }

    // 11fe: Check if input[9] equals 0x79 ('y')
    if (input[9] != 0x79) {  // 0x79 is ASCII for 'y'
        return 0;
    }

    // 1217: Check if input[10] equals 0x5f ('_')
    if (input[10] != 0x5f) {  // 0x5f is ASCII for '_'
        return 0;
    }

    // 1230: Check if input[11] equals 0x63 ('c')
    if (input[11] != 0x63) {  // 0x63 is ASCII for 'c'
        return 0;
    }

    // 1246: Check if input[12] equals 0x72 ('r')
    if (input[12] != 0x72) {  // 0x72 is ASCII for 'r'
        return 0;
    }

    // 125c: Check if input[13] equals 0x34 ('4')
    if (input[13] != 0x34) {  // 0x34 is ASCII for '4'
        return 0;
    }

    // 1272: Check if input[14] equals 0x63 ('c')
    if (input[14] != 0x63) {  // 0x63 is ASCII for 'c'
        return 0;
    }

    // 1288: Check if input[15] equals 0x6b ('k')
    if (input[15] != 0x6b) {  // 0x6b is ASCII for 'k'
        return 0;
    }

    // 129e: Check if input[16] equals 0x7d ('}')
    if (input[16] != 0x7d) {  // 0x7d is ASCII for '}'
        return 0;
    }

    // If all character checks pass, return 1 (true)
    return 1;
}

// A simple main function to test the check_flag function
int main(void) {
    const char *correct_flag = "42CTF{34sy_cr4ck}";
    const char *incorrect_flag = "wrong_flag";

    if (check_flag(correct_flag)) {
        printf("Correct flag detected.\n");
    } else {
        printf("Incorrect flag.\n");
    }

    if (check_flag(incorrect_flag)) {
        printf("Correct flag detected.\n");
    } else {
        printf("Incorrect flag.\n");
    }

    return 0;
}

