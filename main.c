/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if(s < d){ // outputs error if the diastolic pressure is bigger than the systolic
    printf("ERROR\n");
    return 0;
  }
  if(s < 120 && d < 80) { // checks if systolic and diastolic are normal levels
    printf("Normal\n");  
  }
  else if(s >= 120 && s <= 129 && d < 80){ // checks if systolic and diastolic are elevated levels
    printf("Elevated\n");
  }
  else if((s >= 130 && s <= 139) || (d >= 80 && d <= 89)){ // checks if systolic and diastolic are stage 1
    printf("Stage 1 Hypertension");
  }
  else{ // checks if systolic and diastolic are stage 2 and beyond 
    printf("Stage 2 Hypertension\n");
    if(s > 180 || d > 120){
      printf("Hypertensive Crysis");
    }
  }
  return 0;
}
