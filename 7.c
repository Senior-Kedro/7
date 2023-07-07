#include <stdio.h>
#include <math.h>


// Function to check the number of intersection points
int check(int x1, int x2, int r1, int y1, int y2, int r2){

  // Calculate the distance between the centers of the circles using the distance formula
  float dist = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

  // If the centers are the same and the radii are the same, the circles coincide, and there are infinitely many intersection points
  if ((r1 == r2)&&(x1 == x2)&&(y1 == y2)){
    printf("-1\n");
  }
  // If the distance between the centers is equal to the sum or the absolute difference of the radii, there is one intersection point
  else if ((dist==(r1+r2))||(dist== abs(r1 - r2))){
    printf("1\n");
  }
  // If the distance is greater than the sum of the radii or less than the absolute difference of the radii, there are no intersection points
  else if ((dist>(r1+r2))||(dist < abs(r1 - r2))){
    printf("0\n");
  }
  // Otherwise, the circles intersect at two points
  else{
    printf("2\n");
  }
  return 0;
}

int main(){
  int x1, x2, r1, y1, y2, r2;
  
  // Prompt the user to enter the coordinates and radii of the two circles
  printf("Enter the coordinate x1, x2, r1, y1, y2, r2 of the first centre: ");
  scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

  // Call the check function to determine the number of intersection points
  check(x1, x2, r1, y1, y2, r2);

  return 0;
}