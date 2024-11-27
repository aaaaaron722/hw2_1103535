#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// 定義結構來存儲任務
struct Task {
    int profit;
    int deadline;
};

// 自訂排序規則，根據 profit 來降序排列
bool cmp(Task a, Task b) {
    return a.profit > b.profit;
}

int main() {
    int N;  // 任務數量
    cin >> N;

    vector<Task> tasks(N);  // 任務清單
    for (int i = 0; i < N; i++) {
        cin >> tasks[i].profit >> tasks[i].deadline;
    }

    // 根據利潤降序排序
    sort(tasks.begin(), tasks.end(), cmp);

    // 取得最大截止時間
    int maxDeadline = 0;
    for (int i = 0; i < N; i++) {
        maxDeadline = max(maxDeadline, tasks[i].deadline);
    }

    // 儲存結果的最大優先佇列
    vector<int> result(maxDeadline + 1, -1);  // 儲存選定任務
    int maxProfit = 0;  // 總利潤

    for (int i = 0; i < N; i++) {
        // 嘗試將當前任務安排在其截止時間前的最近時間點
        for (int j = tasks[i].deadline; j > 0; j--) {
            if (result[j] == -1) {
                result[j] = tasks[i].profit;
                maxProfit += tasks[i].profit;
                break;
            }
        }
    }

    // 輸出結果
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
