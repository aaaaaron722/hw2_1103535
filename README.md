#### StudentID: 1103535
#### Name: Aaron Lin
#### Date of submission: 11 Nov 2024
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
