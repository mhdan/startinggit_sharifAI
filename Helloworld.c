#include <stdio.h>

int main(){
    char* remote_str = "Hello World! I'm helloworld";
    char* local_str = "Hello World! I'm local";
    printf("%s", remote_str);
    printf("%s", local_str);
    getchar();
    return 0;
}
