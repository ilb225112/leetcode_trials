bool rotateString(char* s, char* goal) {
    int l1=strlen(s),l2=strlen(goal);
    if(l1 != l2) return 0;

    char* srch=malloc(sizeof(char)*(l1+l1+1));
    snprintf(srch,l1+l1+1,"%s%s",s,s);
    if(strstr(srch,goal)!=NULL){
        free(srch);
        return 1;
    }
    free(srch);
    return 0;
}