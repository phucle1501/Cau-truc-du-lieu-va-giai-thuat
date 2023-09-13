unsigned int mystrlen(char *s) {
    unsigned int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

void mystrcpy(char *destination, const char *source) {
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

void mystrcat(char *destination, const char *source) {
    while (*destination != '\0') {
        destination++;
    }
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

void myreverse(char *s) {
    int length = mystrlen(s);
    for (int i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
