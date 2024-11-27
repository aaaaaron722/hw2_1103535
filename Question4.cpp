/*
    StudentID: 1103535
    Name: Aaron Lin
    Date of submission: 27 Nov 2024
*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Task {
    int profit;
    int deadline;
};

//seld define the comparison rules
bool cmp(Task a, Task b) {
    return a.profit > b.profit;
}

int main() {
    int N;  
    cin >> N;

    vector<Task> tasks(N);  //task lists
    for (int i = 0; i < N; i++) {
        cin >> tasks[i].profit >> tasks[i].deadline;
    }

    sort(tasks.begin(), tasks.end(), cmp); //sort it

    int maxDeadline = 0;
    for (int i = 0; i < N; i++) {
        maxDeadline = max(maxDeadline, tasks[i].deadline); //get the maximum deadline
    }

    vector<int> result(maxDeadline + 1, -1); 
    int maxProfit = 0;  

    for (int i = 0; i < N; i++) {
        for (int j = tasks[i].deadline; j > 0; j--) {
            if (result[j] == -1) {
                result[j] = tasks[i].profit;
                maxProfit += tasks[i].profit;
                break;
            }
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;
    cout << "Scheduled Tasks: [";
    bool first = true;
    for (int i = 1; i <= maxDeadline; i++) {
        if (result[i] != -1) {
            if (!first) cout << ", ";
            cout << result[i];
            first = false;
        }
    }
    cout << "]" << endl;

    return 0;
}
