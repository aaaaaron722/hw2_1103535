To TA:
    if you can not find the link of github repository. Because sometimes people may not open the .md file.
    Thus, Here is for you.
    https://github.com/aaaaaron722/hw2_1103535
Aaron

# Data Structure
#### StudentID: 1103535
#### Name: Aaron Lin
#### Date of submission: 27 Nov 2024
<hr>

## Question 1
Write a program to calculate the diameter of a binary tree. The diameter of a binary tree is the length of the longest path between any two nodes in the tree. The path may or may not pass through the root.

---
### Input Format:
The first line contains a list of integers representing the level-order traversal of the binary tree. Use -1 for null nodes.
<br>

---
### Output Format:
Print an integer representing the diameter of the binary tree.
<br>

---
### Example:
##### Input:
    [1, 2, 3, 4, 5, -1, -1, -1, -1, 6, 7]
<br>

##### Output:
    5

## Question 2
Write a program to manage a task priority queue using a max heap. Each task has a name and a priority level. Your program should allow:
1.	Add a Task: Add a task with a given priority.
2.	Get the Highest Priority Task: Remove and return the task with the highest priority.
3.	Display the Remaining Tasks: Print the remaining tasks in descending order of priority.

---
### Input Format:
1.	The first line contains an integer N, the number of operations.
2.	The next N lines contain either:
-	"ADD task_name priority" to add a task.
-	"GET" to fetch the highest-priority task.

<br>

---
### Output Format:
1.	For every "GET" operation, print the name of the task with the highest priority.
2.	At the end, print the list of remaining tasks in descending order of priority.

<br>

---
### Example:
##### Input:
    6
    ADD Task1 10
    ADD Task2 15
    ADD Task3 5
    GET
    ADD Task4 20
    GET

<br>

##### Output:
    5

## Question 3
You are given K sorted arrays of integers. Write a Python program to merge these arrays into a single sorted array using a Min Priority Queue.
Your program should:
1.	Insert the first element of each array into a Min Priority Queue along with the array index and element index.
2.	Extract the smallest element from the queue, add it to the result array, and insert the next element from the same array into the queue.
3.	Continue this process until all elements from all arrays are merged.

---
### Input Format:
1.	An integer K, the number of sorted arrays.
2.	K sorted arrays, each entered on a new line, with elements separated by spaces.
<br>

---
### Output Format:
•	A single line containing the merged sorted array.
<br>

---
### Example:
##### Input:
    3
    1 4 7
    2 5 8
    3 6 9
<br>

##### Output:
    Merged Array: [1, 2, 3, 4, 5, 6, 7, 8, 9]

## Question 4
You are given N tasks, each with a profit and a deadline. Write a Python program to schedule the tasks such that the maximum profit is achieved, using a **Max Priority Queue**.

Each task must be completed within its deadline (1-based index), and only one task can be scheduled at a time.

---
### Input Format:
1.	An integer N, the number of tasks.
2.	N lines containing two integers each: profit and deadline of a task.
<br>

---
### Output Format:
1.	The maximum profit that can be achieved.
2.	The list of scheduled tasks in the order they are executed.
<br>

---
### Example:
##### Input:
    4
    100   2
    19   1
    27   2
    25   1
<br>

##### Output:
    Maximum Profit: 127
    Scheduled Tasks: [100, 27]
    

