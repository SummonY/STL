#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class print {
public:
    void operator()(const T& elem) {    // operator() 重载
        cout << elem << " ";
    }
};

int main()
{
    int ia[6] = {0, 1, 2, 3, 4, 5};
    vector<int> iv(ia, ia + 6);
    // print<int>()是临时对象
    for_each(iv.begin(), iv.end(), print<int>());
    return 0;
}
