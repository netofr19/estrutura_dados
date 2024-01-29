#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
    int length=0, width=0;

    printf("Enter length and width: ");
    cin>>length>>width;

    // Calculate the area and perimeter
    int area = length * width;
    int peri = 2*(length + width);

    printf("Area=%d\nPerimeter=%d\n", area, peri);

    return 0;
}
