#include <iostream>
#include <cstddef>

using namespace std;

class alloc {

};

template <typename T, typename Alloc = alloc, size_t BufSize = 0>
class deque {
public:
    deque() {
        cout << "deque()" << ' ';
    }
};

template <typename T, typename Sequence>
class stack;

template <typename T, typename Sequence>
bool operator== (const stack<T, Sequence>& x, const stack<T, Sequence>& y);

template <typename T, typename Sequence>
bool operator< (const stack<T, Sequence>& x, const stack<T, Sequence>& y);


template <typename T, typename Sequence = deque<T> >
class stack {
    //friend bool operator== <T> (const stack<T>&, const stack<T>&);
    //friend bool operator< <T> (const stack<T>&, const stack<T>&);

    //friend bool operator== <T> (const stack&, const stack&);
    //friend bool operator< <T> (const stack&, const stack&);

    //friend bool operator== <> (const stack&, const stack&);
    //friend bool operator< <> (const stack&, const stack&);

    // not true
    //friend bool operator== (const stack&, const stack&);
    //friend bool operator< (const stack&, const stack&);
public:
    stack() {
        cout << "stack()" << endl;
    }
private:
    Sequence c;
};


template <typename T, typename Sequence>
bool operator== (const stack<T, Sequence>& x, const stack<T, Sequence>& y) {
    return cout << "operator==" << '\t';
}

template <typename T, typename Sequence>
bool operator< (const stack<T, Sequence>& x, const stack<T, Sequence>& y) {
    return cout << "operator<" << '\t';
}

int main()
{
    stack<int> x;
    stack<int> y;
    
    cout << (x == y) << endl;
    cout << (x < y) << endl;

    stack<char> y1;
    return 0;
}
