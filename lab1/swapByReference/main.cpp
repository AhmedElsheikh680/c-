#include <iostream>

using namespace std;
void swap(int& x, int& y) {
    int temp = x;
    x=y;
    y=temp;
}

int main()
{

    cout<<"Before Swap"<<endl;
    int x=10, y=20;
    cout<<"x= "<<x<<", y="<<y<<endl;
    cout<<"After Swap"<<endl;
    swap(x,y);
    cout<<"x= "<<x<<", y= "<<y<<endl;
    return 0;
}
