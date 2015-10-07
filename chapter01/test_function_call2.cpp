#include <iostream>

using namespace std;

// 由于operator()被重载，plus成了一个仿函数
template <typename T>
struct plus2 {
    T operator()(const T& x, const T& y) const {
        return x + y;
    }
};

template <typename T>
struct minus2 {
    T operator()(const T& x, const T& y) const {
        return x - y;
    }
};

int main()
{
    plus2<int> plusobj;
    minus2<int> minusobj;
    cout << plusobj(3, 5) << endl;
    cout << minusobj(10, 7) << endl;

    cout << plus2<int>()(90, 12) << endl;
    cout << minus2<int>()(90, 12) << endl;
    return 0;
}
