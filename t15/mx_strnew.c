#include <stdlib.h>

char *mx_strnew(const int size) {
    char *res = malloc(size + 1);
    if (size < 0 || res == NULL)
        return NULL;
    for (int k = 0; k < size; k++) {
        res[k] = '\0';
    }
    return res;
}
