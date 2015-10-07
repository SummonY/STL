#include <iostream>

using namespace std;

template <typename T>
class testClass {
    public:
        static const int a = 5;
        static const double d = 3.14;
        static const char c = 'c';
};

int main()
{
    cout << testClass<int>::a << endl;
    cout << testClass<int>::d << endl;
    cout << testClass<int>::c << endl;
    return 0;
}
