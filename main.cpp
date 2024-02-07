#include <iostream>
#include <cassert>

int SumFunction(int a, int b)
{
    return a+b;
}
int main()
{
    auto fivePlusFive = SumFunction(5,5);
    assert(fivePlusFive == 10);
    std::cout << "five plus five test passed" <<std::endl;
    auto twoPlusTwo = SumFunction(2,2);
    assert(twoPlusTwo == 0);
    std::cout << "two plus two test passed" <<std::endl;
    return 0;
}