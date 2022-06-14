#include <cstdio>

int palindrome(int x){
    int remainder, reverse = 0, num;
    num = x; // num is used to store the original value of x

    while(x > 0){
        remainder = x % 10;
        reverse = (reverse * 10) + remainder;
        x = x / 10;
    }

    if(reverse == num){
        return true;
    } else return false;
}

int main(){
    int n;
    scanf("%d", &n);

    if(palindrome(n)){
        printf("%d is a palindrome", n);
    } else printf("%d is NOT a palindrome", n);
}
