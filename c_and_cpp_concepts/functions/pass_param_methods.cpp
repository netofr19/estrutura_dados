#include <iostream>

using namespace std;

int add (int a, int b){

    int c;
    c = a+b;

    return c;
}

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int num1 = 10, num2 = 15, sum;

    //Call by values
    sum = add(num1, num2);
    cout<<"Sum is "<<sum<<endl;

    //Call by address
    swap(&num1, &num2);

    cout<<"First Number "<<num1<<endl;
    cout<<"Second Number "<<num2<<endl;

    return 0;
}
