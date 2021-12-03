#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int b = 0;

    while(n--)
    {
        int a;
        cin>>a;
        if(a<h){
            b+=1;
        }
        else if(a==h){
            b+=1;
        }
        else{
            b+=2;
        }

    }
    cout<<b<<endl;
    return 0;
}
