#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
    stack<int> st, minSt;
public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    int pop() {
        if (st.empty()) return -1;
        int element = st.top();
        st.pop();
        if (!minSt.empty() && element == minSt.top()) {
            minSt.pop();
        }
        return element;
    }

    int top() {
        if (st.empty()) return -1;
        return st.top();
    }

    int getMin() {
        if (minSt.empty()) return -1;
        return minSt.top();
    }
};
