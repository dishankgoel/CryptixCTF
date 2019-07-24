#include<stdio.h>
#include<unistd.h>
#include<string.h>

int fail(){
    sleep(1);
    printf("%s\n", "Sadly, You are not allowed");
    return 0;
}

int success(){
    sleep(1);
    printf("%s\n", "You are in!");
    return 0;

}


int check(char s[]){
    int user_length = strlen(s);
    if (user_length != 0x15){
        fail();
    }
    else{
        if (s[7]^s[16] == 0){
            if (s[1]^s[11] == 0){
                if (s[2]^s[8] == 0){
                    if (s[8]^s[18] == 0){
                        if (s[3]^s[17] == 0){
                            if (s[5]^s[20] == 0){
                                if (s[9]^s[10] == 0){
                                    if (s[12]^s[19] == 0){
                                        if (s[0] == 0x6*0x13){
                                            if (s[2] - s[1] == 0x1){
                                                if (s[10] - s[8] == 0x1){
                                                    if (s[2] == 2*0x1a){
                                                        if(s[3] + s[0] == 0xd6){
                                                            if(s[4]-s[3] == 0x5){
                                                                if(s[5] + s[6] == 0xd5){
                                                                    if(s[5] - s[6] == 0x7){
                                                                        if(s[7]-s[8] == 0x2b){
                                                                            if(s[12]+s[13] == 0xcf){
                                                                                if(s[12]*s[13] == 0x29ba){
                                                                                    if(s[15]-s[14] == 0xd){
                                                                                        if(s[15]-s[0] == 0x7){
                                                                                            success();
                                                                                        }
                                                                                        else{fail();}
                                                                                    }
                                                                                    else{fail();}
                                                                                }
                                                                                else{fail();}
                                                                            }
                                                                            else{fail();}
                                                                        }
                                                                        else{fail();}
                                                                    }
                                                                    else{fail();}
                                                                }
                                                                else{fail();}
                                                            }
                                                            else{fail();}
                                                        }
                                                        else{fail();}
                                                    }
                                                    else{fail();}
                                                }
                                                else{fail();}
                                            }
                                            else{fail();}
                                        } 
                                        else{fail();}
                                    }
                                    else{fail();}
                                }
                                else{fail();}
                            }
                            else{fail();}
                        }
                        else{fail();}
                    }
                    else{fail();}
                }
                else{fail();}
            }
            else{fail();}
        }
        else{fail();}
    }
    
}

int main(int argc, char *argv[]){
    if (argc < 2){
        printf("%s\n", "Welcome sire, we need the passphrase as argument.");
    }
    else{
        printf("%s\n", "Please wait while we are authenticating....");
        printf("%s\n", ".......");
        printf("%s\n", "....");
        sleep(3);
        check(argv[1]);
    }
    return 0;
}