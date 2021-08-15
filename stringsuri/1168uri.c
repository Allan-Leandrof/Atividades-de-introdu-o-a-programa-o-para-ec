#include <stdio.h>

int ContaLeds(const char *str){
    int i, leds = 0;

    for(i = 0; str[i] != '\0' ; i++){
        if (str[i] == '1'){
            leds += 2;
        }else if (str[i] == '2' || str[i] == '3' || str[i] == '5'){
            leds += 5;
        }else if (str[i] == '4'){
            leds += 4;
        }else if (str[i] == '6' || str[i] == '9' || str[i] == '0'){
            leds += 6;
        }else if (str[i] == '7'){
            leds += 3;
        }else if (str[i] == '8'){
            leds += 7;
        }   
    }

    return leds;
}
 
int main() {
    char str[102];
    int Leds, n;

    scanf("%d", &n);

    while (n--){
        scanf("%s", str);

        Leds = ContaLeds(str); 
        printf("%d leds\n", Leds);
        
    }


 
    return 0;
}