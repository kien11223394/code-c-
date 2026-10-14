#include <iostream>
using namespace std;
int main()
{
    int a,b,tong,hieu,tich;
    float thuong;
    cout<<"nhap so nguyen a ";
    cin>>a;
    cout<<"nhap so nguyen b ";
    cin>>b;
    tong=a+b;
    cout<<"Tong la "<<tong<<"\n";
    hieu=a-b;
    cout<<"Hieu la "<<hieu<<"\n";
    tich=a*b;
    cout<<"Tich la "<<tich<<"\n";
    thuong=(float)a/b;
    cout<<"Thuong la "<<thuong<<"\n";
    return 0;
}