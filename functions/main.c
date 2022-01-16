#include <stdio.h>
//A program to compute the area and perimeter of a circle using functions
const float PI = 3.142;
float computeArea(float);
float computePerimeter(float);
int main(){
    float radius, perimeter,area;
    printf("Enter radius \n");
    scanf("%f",&radius);
    area = computeArea(radius);
    perimeter = computePerimeter(radius);
    printf("The Area = %0.3f\n",area);
    printf("The Perimeter = %0.3f\n",perimeter);
    }
        float computeArea(float r){
        float area = PI*r*r;
        return  area;
        }
        float computePerimeter(float r){
        float perimeter = 2*PI*r;
        return perimeter;
        }



