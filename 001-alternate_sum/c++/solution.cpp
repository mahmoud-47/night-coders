/*
** Problem Description **

You are given an integer number. 
You need to compute the alternating sum of its digits, starting with addition for the first digit.

That is:
    result = 1st_digit - 2nd_digit + 3rd_digit - 4th_digit + 5th_digit - ...

Return the final result as an integer.

---
Example 1

Input :
num = 1234

Output: -2

Explanation:
    1 - 2 + 3 - 4 = -2

---
Example 2

Input :
num = 98765

Output: 7

Explanation:
    9 - 8 + 7 - 6 + 5 = 7

    '0 1 2 3 4 5 6 7 8 9'

Constraints:
    - 1 <= num <= 10^18
    - The input number will not have leading zeros.
    - The result must be returned as an integer.
*/

#include "solution.h"

long long Solution::alternate_sum(long long num) {
    // std::string num_string = std::to_string(num);
    // int sum = 0;

    // for(int i = 0; i < num_string.size(); i++){
    //     if(i % 2 == 0)
    //         sum = sum + (num_string[i] - '0');
    //     else
    //         sum = sum - (num_string[i] - '0');
    // }
    // return sum;
    int num_digits = 0;
    long long copy_n = num;

    while(copy_n != 0){
        num_digits += 1;
        copy_n = copy_n / 10;
    }

    int signe;
    if(num_digits % 2 == 0)
        signe = -1;
    else
        signe = 1;

    int s = 0;
    while (num != 0){
        int last_digit = num % 10;
        s = s + signe * last_digit;
        num = num / 10;
        signe = -signe;
    }

    return s;
    
}
