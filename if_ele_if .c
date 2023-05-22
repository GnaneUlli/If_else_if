/* The first program depicts the usage of several conditions and thier execution using the 
if and if else and if else if statements . If I read this program whenever I want to recall the 
Conditional control statements this covers almost everything about the conditional control statements. */

#include <stdio.h>

int main() {
    int score;
    
    printf("Enter your score: ");
    scanf("%d", &score);
    
    if (score >= 90) {
        if (score == 100) {
            printf("Perfect score!\n");
        }
        else {
            printf("Excellent!\n");
        }
    }
    else if (score >= 80) {
        printf("Very good!\n");
    }
    else if (score >= 70) {
        printf("Good!\n");
    }
    else if (score >= 60) {
        printf("Average.\n");
    }
    else {
        printf("Try harder next time!\n");
    }
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        }
        else {
            printf("The number is positive and odd.\n");
        }
    }
    else if (num < 0) {
        printf("The number is negative.\n");
    }
    else {
        printf("The number is zero.\n");
    }
    
    int age;
    char gender;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    
    if (age >= 18) {
        if (gender == 'M') {
            printf("You are an adult male.\n");
        }
        else if (gender == 'F') {
            printf("You are an adult female.\n");
        }
        else {
            printf("Invalid gender.\n");
        }
    }
    else {
        printf("You are a minor.\n");
    }
    
    //
    
    return 0;
}

/* In this second program I written program to cover remaining topics break, continue and goto */

#include <stdio.h>

int main() {
  int number, i;
  
  printf("Enter a number: ");
  scanf("%d", &number);
  
  if (number < 0) {
    printf("Number cannot be negative.\n");
    goto end;
  }
  
  for (i = 1; i <= number; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("BradPitt\n");
      continue;
    }
    else if (i % 3 == 0) {
      printf("Brad\n");
      continue;
    }
    else if (i % 5 == 0) {
      printf("pitt\n");
      continue;
    }
    printf("%d\n", i);
    
    if (i >= 20) {
      break;
    }
  }
  
  end:
  printf("Program ended.\n");
  
  return 0;
}
