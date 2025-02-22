#include <iostream>
int main(){
    int a,b;
    std::cout<<"Enter two number: ";
    std::cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"Swapped numbers: "<<a<<" "<<b<<std::endl;
    return 0;
}