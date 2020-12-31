int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char * s1, const char * s2);

int main (int argc, char *argv[]) {
    int i;
    char *copy;

    if (argc == 0)
        return;
    for (i = 0; i < argc; i++)
        for (int j = 0; j < argc; j++)
            if (mx_strcmp(argv[j], argv[j + 1]) > 0) {
                copy = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = copy;
            }
    for (i = 1; i <= argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
