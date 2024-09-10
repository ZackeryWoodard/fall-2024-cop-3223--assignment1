#include <stdio.h>

double calculateDistance() {

// sets up variables for user input

    double x1;
    double y1;
    double x2;
    double y2;
    double distance = x2-x1; // calculates distance
// asks for user input
    printf("Enter x1:");
    scanf("%lf", &x1);

    printf("Enter y1:");
    scanf("%lf", &y1);

    printf("Enter x2:");
    scanf("%lf", &x2);

    printf("Enter y2:");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %lf  ; y1 = %lf",x1,y2);
    printf("Point #1 entered: x1 = %lf ; y1 = %lf",x2,y2);
    printf("The distance between the 2 points is %lf",distance);

    return distance;
}

double calculatePerimeter() {

// sets up variables for user input

    double x1;
    double y1;
    double x2;
    double y2;
    double p = calculateDistance();
    double perimeter = p*2; //calculates perimeter from distance function
// asks for user input
    printf("Enter x1:");
    scanf("%lf", &x1);

    printf("Enter y1:");
    scanf("%lf", &y1);

    printf("Enter x2:");
    scanf("%lf", &x2);

    printf("Enter y2:");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %lf  ; y1 = %lf",x1,y2);
    printf("Point #1 entered: x1 = %lf ; y1 = %lf",x2,y2);
    printf("The perimeter of the city encompassed by your request is %lf",perimeter);

    return 3;  
}

double calculateArea(){
  // sets up varaibles for user input
    double x1;
    double y1;
    double x2;
    double y2;
    double a = calculatePerimeter();
    double area = a*a;//calculates area with perimeter function
// asks for user input
    printf("Enter x1:");
    scanf("%lf", &x1);

    printf("Enter y1:");
    scanf("%lf", &y1);

    printf("Enter x2:");
    scanf("%lf", &x2);

    printf("Enter y2:");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %lf  ; y1 = %lf",x1,y2);
    printf("Point #1 entered: x1 = %lf ; y1 = %lf",x2,y2);
    printf("The area of the city encompassed by your request is %lf",area);

    return 3;  
}
double calculateWidth(){
  // sets up variables for user input
    double x1;
    double y1;
    double x2;
    double y2;
    double width = x2-x1; // calculates width
// asks for user input
    printf("Enter x1:");
    scanf("%lf", &x1);

    printf("Enter y1:");
    scanf("%lf", &y1);

    printf("Enter x2:");
    scanf("%lf", &x2);

    printf("Enter y2:");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %lf  ; y1 = %lf",x1,y2);
    printf("Point #1 entered: x1 = %lf ; y1 = %lf",x2,y2);
    printf("The width of the city encompassed by your request is %lf",width);

    return 3;      
}
double calculateHeight(){
// sets up variables for user input
    double x1;
    double y1;
    double x2;
    double y2;
    double height = y2-y1; // calculates height
// asks for user input
    printf("Enter x1:");
    scanf("%lf", &x1);

    printf("Enter y1:");
    scanf("%lf", &y1);

    printf("Enter x2:");
    scanf("%lf", &x2);

    printf("Enter y2:");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %lf  ; y1 = %lf",x1,y2);
    printf("Point #1 entered: x1 = %lf ; y1 = %lf",x2,y2);
    printf("The height of the city encompassed by your request is %lf",height);

    return 3;      
}

// main function calls other functions to work

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}