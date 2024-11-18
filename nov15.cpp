#include <iostream>
#include <queue>

template <typename T>
T returnLast(std::queue<T> q) {
    while (q.size() > 1) {
        q.pop();
    }
    return q.front();
}

template <typename T>
void two_dequeues(std::deque<T> &deq1, std::deque<T> &deq2) {
    if (deq1.size() == 0 && deq2.size() >= 2) {
        T last_item = deq2.back();
        deq1.push_back(last_item);
    }
}

int main() {
    std::queue<int> q;

    q.push(2);
    q.push(5);
    q.push(7);

    std::deque<int> q1;
    std::deque<int> q2;

    q2.push_back(4);
    q2.push_back(5);

    std::cout << returnLast(q) << std::endl;

    two_dequeues(q1, q2);
    
    for (std::deque<int>::iterator it = q1.begin(); it != q1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    for (std::deque<int>::iterator it = q2.begin(); it != q2.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}