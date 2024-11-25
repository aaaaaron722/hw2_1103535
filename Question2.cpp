#include <bits/stdc++.h>
using namespace std;

struct Task {
    string name;
    int priority;

    Task(string task_name, int task_priority) {
        name = task_name;
        priority = task_priority;
    }

    bool operator<(const Task &other) const {
        return priority < other.priority;
    }
};

int main() {
    int N;
    cin >> N;
    
    priority_queue<Task> pq;  // priority_queue is a lib which implemented max-heap
    vector<Task> remaining_tasks; 

    for (int i = 0; i < N; ++i) {
        string operation;
        cin >> operation;

        if (operation == "ADD") {
            string task_name;
            int priority;
            cin >> task_name >> priority;
            pq.push(Task(task_name, priority)); 
        }
        else if (operation == "GET") {
            if (!pq.empty()) {
                Task top_task = pq.top();
                cout << top_task.name << endl;
                pq.pop(); 
            } else {
                cout << "No tasks available" << endl;
            }
        }
    }

    while (!pq.empty()) {
        remaining_tasks.push_back(pq.top());
        pq.pop();
    }

    cout << "Remaining tasks: [";
    for (int i = 0; i < remaining_tasks.size(); ++i) {
        cout << "('" << remaining_tasks[i].name << "', " << remaining_tasks[i].priority << ")";
        if (i < remaining_tasks.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
