#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// cookie_len은 배열 cookie의 길이입니다.
int solution(int cookie[], size_t cookie_len) {
    int answer = -1;
    
    int left = 0, right = 0;
    
    for(int i=0; i<cookie_len-1; i++) {
        left = i;
        right = left+1;
        
        int left_sum = cookie[left];
        int right_sum = cookie[right];
        
        while(left >= 0 && right < cookie_len) {
            if(left_sum == right_sum) {
                if(answer < left_sum) {
                    answer = left_sum;
                }
            }
            if(left_sum <= right_sum) {
                left --;
                if(left >= 0)
                    left_sum += cookie[left];
            } else if(left_sum > right_sum) {
                right++;
                if(right < cookie_len)
                    right_sum += cookie[right];
            }
        }
    }
    if(answer == -1) answer = 0;
    
    return answer;
} 