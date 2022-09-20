#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void randomPassword(int n)
{
    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM";
    int i;
    for (i = 0; i < n; i++){
        printf("%c", list[rand() % (sizeof list - 1)]);
    }
    
}

int main(){
    int n = 10;
    randomPassword(n);
    return 0;
}