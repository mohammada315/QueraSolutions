
#include <iostream>

using namespace std;

int main()
{
    string InputChessMem ;
    int a , b , c , d , e ,f ;
    
    std::cin >> a >> b >> c >> d >> e >> f ;
    
    a = 1 - a ;
    b = 1 - b ;
    c = 2 - c ;
    d = 2 - d ;
    e = 2 - e ;
    f = 8 - f ;
    
    std::cout <<a <<" "<< b<<" "<< c<<" "<< d<<" "<< e<<" "<< f<<" ";

    return 0;
}
