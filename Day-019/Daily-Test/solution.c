#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s1[101], s2[101], c;
    scanf("%s%s", s1, s2);
    int l1 = strlen(s1), l2 = strlen(s2), c1 = 0, c2 = 0, i=0;
    for(c = s1[i]; i<l1; c = s1[++i]) if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')) c1++;
    i=0;
    for(c=s2[i]; i<l2; c=s2[++i]) if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')) c2++;
    if(c1>c2) printf("%s", s1);
    else if(c2>c1) printf("%s", s2);
    else{
        if(l1>l2) printf("%s", s1);
        else printf("%s", s2);
    }
}