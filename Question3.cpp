/*
    StudentID: 1103535
    Name: Aaron Lin
    Date of submission: 27 Nov 2024
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int> > ppi; // define 

vector<int> mergeKArrays(vector<vector<int> > arr)
{
    vector<int> output;

    priority_queue<ppi, vector<ppi>, greater<ppi> > pq;

    for (int i = 0; i < arr.size(); i++) // traverse the array 
        pq.push({ arr[i][0], { i, 0 } }); // arr[i][0] equal 2, 1, 23 and {i, 0} is the pair<int, int> which is to record the number of vector and which index in this vector

    while (pq.empty() == false) {
        ppi curr = pq.top();
        pq.pop();

        int i = curr.second.first; // crr.second which is pair<int,int> hence crr.second.first is i, where is the number of vecotor.
        int j = curr.second.second; // crr.second.second which is the index in indicated vector

        output.push_back(curr.first); // put the curr into output vector

        if (j + 1 < arr[i].size())
            pq.push({ arr[i][j + 1], { i, j + 1 } });
    }

    return output;
}

int main()
{
    vector<vector<int> > arr{ { 2, 6, 12 },
                            { 1, 9 },
                            { 23, 34, 90, 2000 } };

    vector<int> output = mergeKArrays(arr);

    cout << "Merged array is " << endl;
    for (auto x : output)
        cout << x << " ";

    return 0;
}