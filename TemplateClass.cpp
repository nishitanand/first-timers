##First program for:-
##Template class to find minimum and maximum number

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


template <class t> t max1(t x,t y)
{
    if (x>y)
        return x;
    else
        return y;
}
template <class t1> t1 min1(t1 x,t1 y)
{
    if (x<y)
        return x;
    else
        return y;
}
int main()
{
 int a=max1<int>(3,7);
int b=min1<int>(5,10);
cout<<"Max is "<<a<<"and Min is"s<<b;
}
