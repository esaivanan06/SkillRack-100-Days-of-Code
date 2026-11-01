#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s", s);
    int freq[26] = {0}, l = strlen(s);
    for(int i=0; i<l; i++) freq[s[i] - 'a']++;
    for(int i=25; i>=0; i--) while(freq[i]--) printf("%c", 'a'+i);
    return 0;
}