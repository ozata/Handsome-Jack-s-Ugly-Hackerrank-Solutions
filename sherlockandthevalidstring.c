// EasyMoneyDeveloper
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000000

char* isValid(char* sherlocked){
    // Getting the array for algorithm.
    int letters[26] = {0};
    int value = 97;
    int l = (int) strlen(sherlocked);

    for(int i = 0 ; i < l; i++){
        int index = sherlocked[i] - value;
        letters[index] += 1;
    }
    int notZero = 0;
    for(int i = 0 ; i < 26; i++){
        if(letters[i] != 0){
            notZero++;
        }
    }
    int let[notZero];
    int a = 0;
    for(int i = 0 ; i < 26 ; i++){
        if(letters[i] != 0){
            let[a++] = letters[i];
        }
    }

    // If length is 1 return YES
    if(l == 1 || l == 2) return "YES";

    // Algorithm
    int letLength = sizeof(let)/sizeof(int);

    // Find the key of the array
    int key = -1;
    if(let[0] == let[1]){
        key = let[0];
    } else if(let[0] == let[2]){
        key = let[0];
    } else if(let[1] == let[2]){
        key = let[1];
    }
    if(key == -1) return "NO";
    
    int boom = 0;
    for(int i = 0 ; i < letLength ; i++){
        if(let[i] > key + 1) return "NO";
        if(let[i] != key){
            boom++;
        }
        if(boom > 1){
            return "NO";
        }
    }

    return "YES";
}

int main(){
    char buf[MAX];
    fgets(buf, MAX, stdin);
    int len = strlen(buf);
    if( buf[len-1] == '\n' )
        buf[len-1] = 0;
    printf("%s", isValid(buf));
    return 0;
}
