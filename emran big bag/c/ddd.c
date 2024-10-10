#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {

    string names[] = {"a","123","g","213","f","321","k","132","j","312"};

    for(int i=0 ; i<10;i++){
        if(strcmp(names[i],"f")==0){
            printf("found %s\n",names[i + 1]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}