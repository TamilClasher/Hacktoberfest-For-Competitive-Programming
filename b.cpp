#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
int main()
{
int test;
std::cin>>test;
while(test--)
{
int r,c; std::cin>>r>>c;
if(r%2!=0&&c%2!=0)
    std::cout<<r+c-1<<"\n";
else if(r%2==0&&c%2==0)
std::cout<<"0\n";
else
    std::cout<<((r%2==0)?r:c)<<"\n";
}
return 0;
}
 