#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
    printf("Please enter the secret code:\n");
    int code;
    scanf("%d", &code);
    if (code == 0xdead){
        printf("Got lucky?..\n");
        sleep(2);
        printf("flag{sTring5_To_tH3_R35cU3}");
    }
    else{
        printf("You are not allowed!\n");
    }
}