#include <ostream>
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack {
    private:
        vector<T> numbers;

    public:
        Stack(vector<T> n) {
            numbers = n;
        }
        void add_item(T n) {
            numbers.push_back(n);
        }

        void pop() {
            numbers.pop_back();
        }

        int num_elements() {
            return numbers.size();
        }

        T get_element(T i) {
            return numbers[i];
        }

        T top() {
            return numbers[numbers.size() -1];
        }
        
        friend std::ostream& operator<<(std::ostream& os, Stack& stack) {
            os << "Stack: [";
            for (int i = 0; i < stack.num_elements(); ++i) {
                os << stack.get_element(i);
                if (i < stack.num_elements() - 1) {
                    os << ", "; // Add a comma between elements
                }
            }
            os << "]";
            return os;
        }
    
};

int main() {
    vector<int> vector = {20, 10, 5, 2, 4, 3};

    Stack<int> st(vector);
    cout << st << endl;

    st.pop();

    st.add_item(20);

    cout << st << endl;
}
