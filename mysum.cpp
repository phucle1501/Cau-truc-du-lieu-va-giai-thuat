int mysum(int *start, int *end) {
    int sum = 0;
    for (int *p = start; p != end; p++) {
        sum += *p;
    }
    return sum;
}

