int uniqueXorTriplets(int strng[], int numbr) {
    if (numbr < 3)
        return numbr;
    int p0 = 0;
    int temp = numbr;
    while (temp > 1) {
        temp /= 2;
        p0++;
    }
    return 1 << (p0 + 1);
}

