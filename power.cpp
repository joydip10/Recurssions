#include<iostream>
using namespace std;

int power(int n,int p)
{
    if (p==1){
        return n;
    }
    else{
        return power(n,p-1)*n;
    }
}

int main()
{
    cout<<power(2,3);
    return 0;
}
