bool isValid(char* s) {
    int n = strlen(s);
    if (n % 2 != 0) return false; // Check for odd length

    int i = 0;
    while (i < n - 1) {
        if ((s[i] == '(' && s[i + 1] == ')') ||
            (s[i] == '{' && s[i + 1] == '}') ||
            (s[i] == '[' && s[i + 1] == ']')) {
            // Remove matched parentheses
            memmove(&s[i], &s[i + 2], n - i - 1);
            n -= 2;
            s[n] = '\0';
            if (i >= 1) i--;
        } else {
            i++;
        }
    }

    return n == 0;
}

