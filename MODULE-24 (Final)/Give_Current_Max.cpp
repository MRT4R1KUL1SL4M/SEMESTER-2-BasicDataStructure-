#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks) {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};

class cmp {
public:
    bool operator()(Student a, Student b) {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
            return a.roll > b.roll;
    }
};

int main() {
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    while (q--) {
        int c;
        cin >> c;

        if (c == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        } else if (c == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        } else if (c == 2) {
            if (!pq.empty()) {
                pq.pop();
            }
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }

    return 0;
}
