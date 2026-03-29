bool samePair(char a,char b,char c,char d) {
    return (a==c && b==d) || (a==d && b==c);
}

bool canBeEqual(char* s1, char* s2) {
    return samePair(s1[0], s1[2], s2[0], s2[2]) && samePair(s1[1], s1[3], s2[1], s2[3]);
}