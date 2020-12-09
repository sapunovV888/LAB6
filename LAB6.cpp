#include <iostream>
#include <cmath>

using namespace std;
unsigned long long fact( int n)
    {
        unsigned long long int fact1=1;
        for (int i=1;i<=n;i++)
        {
            fact1*=i;
        }
        return fact1;
    }

int main()
{
    long long int n;
    long double x,k,d,d1,d2,s,eps,z;
    cout<<"please enter number n"<<endl;
    cin>> n;
    cout<<"please enter number x"<<endl;
    cin>> x;
    cout<<"please enter precision number epsilon"<<endl;
    cin>> eps;
    k=0;
    d=(pow(-1,k)*pow(fact(k)*fact(n+k),-1))*(pow(0.5*x,(2*k+n)));
    do
    {
        k++;
        d1=(pow(-1,k)*pow(fact(k)*fact(n+k),-1))*(pow(0.5*x,(2*k+n)));//previus member
        d2=(pow(-1,k-1)*pow(fact(k-1)*fact(n+(k-1)),-1))*(pow(0.5*x,(2*(k-1)+n)));// current member
        d=d+d1;
        z=d1-d2;
        //cout<< d2;
        //cout<< d1;
        //cout<<k<<endl;
        //cout<<s<<endl;
    }while(fabs(z)>eps);
    cout<<"D="<< d;
    return 0;
}
