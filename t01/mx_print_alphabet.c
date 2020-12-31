void mx_printchar(char c);

void mx_print_alphabet(void) {
    int big = 65;
    int small = 98;
 
    for (int size = 0; size <= 25; size++) {
       if (size % 2 == 0) {
            mx_printchar(big);
            big += 2;
        }
        else {
             mx_printchar(small);
             small += 2;
        }
    }
    mx_printchar('\n');
}
