#include <stdio.h>

int main(){
    char* local_str = "Hello World! I'm remote helloworld";
    char* remote_str = "Hello World! I'm local helloworld";
    printf("%s", local_str);
    printf("%s", remote_str);
    getchar();
    return 0;
}
