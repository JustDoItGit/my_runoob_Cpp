#include <iostream>
#include <vector>

using std::vector;
int main(void)
{
    vector<int> v;
    std::cout << "v.size() == " << v.size() << " v.capacity() = " << v.capacity() << std::endl;
    v.reserve(10);
    std::cout << "v.size() == " << v.size() << " v.capacity() = " << v.capacity() << std::endl;
    v.resize(10);
    v.push_back(0);
    std::cout << "v.size() == " << v.size() << " v.capacity() = " << v.capacity() << std::endl;

    return 0;
}