// Author: Ismail Al Abdali ija5135@psu.edu
// Collaborator: Youngjae Bae yvb5135@psu.edu
// Collaborator: Jayesh Agarwala jpa5592@psu.edu
// Collaborator: Harshvardhan Singh hms5805@psu.edu
// Collaborator:Tylor Holman trh5481@psu.edu
// Section: 011R
// Breakout: 4

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double g = atof(grade);
  if (g>=93.0) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (g>=90.0) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (g>=87.0) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (g>=83.0) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (g>=80.0) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (g>=77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (g>=70.0) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (g>=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if (g<60.0) {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}