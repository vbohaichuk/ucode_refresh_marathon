char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int length = mx_strlen(str);
    char *dublicate = mx_strnew(length);
    return mx_strcpy(dublicate, str);
}
