int numJewelsInStones(char* jewels, char* stones) {
    int freq[256]={0};
    int l1=strlen(jewels);
    for(int i=0;i<l1;i++)
        freq[jewels[i]]++;
    int res=0,l2=strlen(stones);
    for(int i=0;i<l2;i++)
        res+=freq[stones[i]];
    return res;
}