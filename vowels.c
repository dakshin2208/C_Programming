#include<stdio.h>
int main(){
    char vowels;
    printf("enter the letter:");
    scanf("%c",&vowels);
    switch(vowels){
        case "a":
        case "e":
        case "i":
        case "o":
        case "u":
        printf("%c is vowel\n",vowels);
        break;
        default:
        printf("%c is consonant",vowels);
        
