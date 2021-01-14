#include <stdio.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
int areaOfCircle(float radius) {

  float area = radius * radius * 3.1415;
  return area;
 }



int main(int argc, char* argv[]) 
{
float input[100], lower[100];
float input[100], upper[100];
printf("Lower input:\n");
fgets(input, 100, lower);
sscanf(input, "%f", lower);
printf("Upper input;\n");
fgets(input, 100, upper);
sscanf(input, "%f", upper); 
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = lower;
  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
for (float i = lower; i < upper; i++) {
  float result = areaOfCircle(i);
  printf("A circle with the radius of %f has an area of %f\n", i, result);
 }

  
}
