#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(4*sizeof(char));
    
    int day = 4;
    day += (a-1)*31 + b;
    
    for(int i=1; i<a; i++) {
        switch(i){
            case 2:
                day -= 2;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                day -= 1;
                break;
        }
    }

    day = day%7;
    switch(day) {
        case 0:
            strcpy(answer, "SUN");
            break;
        case 1:
            strcpy(answer, "MON");
            break;
        case 2:
            strcpy(answer, "TUE");
            break;
        case 3:
            strcpy(answer, "WED");
            break;
        case 4:
            strcpy(answer, "THU");
            break;
        case 5:
            strcpy(answer, "FRI");
            break;
        case 6:
            strcpy(answer, "SAT");
            break;
    }
    
    
    return answer;
}