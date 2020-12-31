double mx_pow(double n, unsigned int pow) {
    double res = n;

    if(pow == 0 || n == 1)
	    return 1;
    for (unsigned int i = 0; i < (pow - 1); i++) {
        res = res * n;
    }
    return res;
}
