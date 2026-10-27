#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[101], c;
    scanf("%s", s);
    int l = strlen(s), i=0;
    for(c = tolower(s[i]); i<l; c = tolower(s[++i])){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            if(isupper(s[i])) printf("%c", c);
            else printf("%c", toupper(s[i]));
        }
        else printf("%c", s[i]);
    }
    return 0;
}