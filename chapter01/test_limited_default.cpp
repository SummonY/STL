#include <iostream>

using namespace std;

class alloc {

};

template <typename T, typename Alloc = alloc, size_t BufSize = 0>
class deque {
public:
    deque() {
        cout << "deque()" << endl;
    }
};

template <typename T, typename Sequence = deque<T> >
class stack {
public:
    stack() {
        cout << "stack()" << endl;
    }
private:
    Sequence c;
};

int main()
{
    stack<int> ist;

    return 0;
}
