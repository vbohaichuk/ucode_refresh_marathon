#include <unistd.h>

void mx_printchar(char n);

void mx_printint (int n) {

    if (n == -2147483648) {
    write(1, "-2147483648", 11);
    return;
    }
    if (n < 0) {
        n*= -1;
        mx_printchar('-');
    }
    if (n > 9)
        mx_printint(n / 10);
        mx_printchar(n % 10 + 48);
}
