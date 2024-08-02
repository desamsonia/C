#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A function to print the word representation of a single digit
void print_single(int n) {
  char *singles[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  printf("%s ", singles[n]);
}

// A function to print the word representation of a two-digit number
void print_double(int n) {
  char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  if (n < 10) {
    print_single(n);
  } else if (n >= 10 && n < 20) {
    printf("%s ", teens[n - 10]);
  } else {
    printf("%s ", tens[n / 10]);
    if (n % 10 != 0) {
      print_single(n % 10);
    }
  }
}

// A function to print the word representation of a three-digit number
void print_triple(int n) {
  if (n / 100 != 0) {
    print_single(n / 100);
    printf("hundred ");
  }
  if (n % 100 != 0) {
    print_double(n % 100);
  }
}

// A function to print the word representation of a four-digit number
void print_quad(int n) {
  if (n / 1000 != 0) {
    print_single(n / 1000);
    printf("thousand ");
  }
  if (n % 1000 != 0) {
    print_triple(n % 1000);
  }
}

// A function to print the word representation of any number up to 9999
void print_number(int n) {
  if (n < 0)
   {
    printf("minus ");
    n = -n;
    }
  if (n == 0) 
  {
    print_single(n);
  } 
  else if (n < 100) 
  {
    print_double(n);
  } 
  else if (n < 1000) 
  {
    print_triple(n);
  } 
  else if (n < 10000)
   {
    print_quad(n);
  } 
  else {
    printf("Invalid number");
  }
  printf("\n");
}

// A main function to test the program
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  print_number(n);
  return 0;
}

