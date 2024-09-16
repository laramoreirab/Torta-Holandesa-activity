#include <iostream>
using namespace std;
int main ()
{
    int N,G,M,T;
    cin>> N;
    cin>> G;
    cin>> M;
    T = G*8+M*6 - N;
    if (T<=0)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<T<<endl;
    }
    return 0;
}