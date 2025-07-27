#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
// Function to calc euclidean distance between two 2D points  ----> E.D d(x,y)=sqrt(square(x2-x1)+square(y2-y1))
float eDistance(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    return sqrt((dx * dx) + (dy * dy));
}
// To calc. area of circle using callback function
void areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    float r = fptr(x1, y1, x2, y2);
    if (r == 0.0)
    {
        printf("Warning: Both points are the same. Radius is zero.\n");
        printf("Area of circle: 0.000\n");
        return;
    }

    float area = PI * r * r;
    printf("Radius of circle(calc by euclidean distance): %.2f\n", r);
    printf("Area of circle: %.3f\n", area);
}
int main()
{
    // Taking Co-Ordinates from user
    int x1, y1, x2, y2;
    printf("Enter x and y Co-Ordinates of Point A: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x and y Co-Ordinates of Point B: ");
    scanf("%d %d", &x2, &y2);
    areaOfCircle(x1, y1, x2, y2, eDistance);
    return 0;
}