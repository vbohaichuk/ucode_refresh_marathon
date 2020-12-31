int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int left = 0;
	int right = size - 1;
	int mid = 0;

	while (left <= right) {
		mid = (left + right) / 2;
		(*count)++;
		if (mx_strcmp(arr[mid], s) < 0) {
			left = mid + 1;
        }
		else if (mx_strcmp(arr[mid], s) > 0) {
			right = mid - 1;
        }
		else {
			return mid;
        }
	}
    *count = 0;
	return -1;
}
