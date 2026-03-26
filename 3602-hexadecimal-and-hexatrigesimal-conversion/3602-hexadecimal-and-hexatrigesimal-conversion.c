char* concatHex36(int n) {
    long long n2 = (long long)n*n;
    long long n3=(long long)n*n*n;
    char* res = malloc(16);
    char* st=res,*end=res;

    char map[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i=0;

    while(n2>0){
        *end=map[n2 % 16];
        n2/=16;
        end++;i++;
    }

    end--;
    while(st<end){
        *st = *st ^ *end;
        *end = *st ^ *end;
        *st =  *st ^ *end;
        st++;
        end--;
    }

    end = res+i;st=end;

    while(n3>0){
        *end=map[n3 % 36];
        n3/=36;
        end++;i++;
    }
    res[i]='\0';

    end--;
    while(st<end){
        *st = *st ^ *end;
        *end = *st ^ *end;
        *st =  *st ^ *end;
        st++;
        end--;
    }
    return res;
}