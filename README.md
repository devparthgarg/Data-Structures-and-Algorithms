# Data-Structures-and-Algorithms
<center><img src="logo.png" alt="logo"></center>
A repository which contains DSA questions from basic to advanced for interview preparation.

## Setting up and running the project
Fork the repo and clone it.
```
git clone https://github.com/whoparthgarg/Data-Structures-and-Algorithms.git
```
## Contents
SNo | Name |
----|------|
1 | [Mathematics](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/01.%20Mathematics)
2 | [Bit Manipulation](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/02.%20Bit%20Manipulation)
3 | [Recursion](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/03.%20Recursion)	
4 | [Arrays](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/04.%20Arrays)  	
5 | [Searching](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/05.%20Searching)  
6 | [Sorting](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/06.%20Sorting)   
7 | [Matrix](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/07.%20Matrix)    
8 |[Hashing](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/08.%20Hashing)   	
9 |[Strings](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/09.%20Strings)	
10 | [Linked List](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/10.%20Linked%20List)     	
11 | [Stack](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/11.%20Stacks)	  	
12 | [Queue](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/12.%20Queue)	   
13 | [Deque](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/13.%20Deque)	   
14 | [Binary Tree](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/14.%20Binary%20Tree)	    	
15 | [Binary Search Tree](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/15.%20Binary%20Search%20Tree)     	
16 | [Heap](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/16.%20Heaps)
17 | [Graph](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/17.%20Graphs)	   
18 | [Greedy](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/18.%20Greedy%20Algorithms)     	
19 | [Backtracking](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/19.%20Backtracking)     	
20 | [Dynamic Programming](https://github.com/whoparthgarg/Data-Structures-and-Algorithms/tree/main/20.%20Dynamic%20Programming)

## Big O Notation

*Big O notation* is used to classify algorithms according to how their running time or space requirements grow as the input size grows.
On the chart below you may find most common orders of growth of algorithms specified in Big O notation.

![Big O graphs](./big-o-graph.png)

Source: [Big O Cheat Sheet](http://bigocheatsheet.com/).

Below is the list of some of the most used Big O notations and their performance comparisons against different sizes of the input data.

| Big O Notation | Computations for 10 elements | Computations for 100 elements | Computations for 1000 elements  |
| -------------- | ---------------------------- | ----------------------------- | ------------------------------- |
| **O(1)**       | 1                            | 1                             | 1                               |
| **O(log N)**   | 3                            | 6                             | 9                               |
| **O(N)**       | 10                           | 100                           | 1000                            |
| **O(N log N)** | 30                           | 600                           | 9000                            |
| **O(N^2)**     | 100                          | 10000                         | 1000000                         |
| **O(2^N)**     | 1024                         | 1.26e+29                      | 1.07e+301                       |
| **O(N!)**      | 3628800                      | 9.3e+157                      | 4.02e+2567                      |

## Data Structure Operations Complexity

| Data Structure          | Access    | Search    | Insertion | Deletion  | Comments  |
| ----------------------- | :-------: | :-------: | :-------: | :-------: | :-------- |
| **Array**               | 1         | n         | n         | n         |           |
| **Stack**               | n         | n         | 1         | 1         |           |
| **Queue**               | n         | n         | 1         | 1         |           |
| **Linked List**         | n         | n         | 1         | n         |           |
| **Hash Table**          | -         | n         | n         | n         | In case of perfect hash function costs would be O(1) |
| **Binary Search Tree**  | n         | n         | n         | n         | In case of balanced tree costs would be O(log(n)) |
| **B-Tree**              | log(n)    | log(n)    | log(n)    | log(n)    |           |
| **Red-Black Tree**      | log(n)    | log(n)    | log(n)    | log(n)    |           |
| **AVL Tree**            | log(n)    | log(n)    | log(n)    | log(n)    |           |
| **Bloom Filter**        | -         | 1         | 1         | -         | False positives are possible while searching |

## Array Sorting Algorithms Complexity

| Name                  | Best            | Average             | Worst               | Memory    | Stable    | Comments  |
| --------------------- | :-------------: | :-----------------: | :-----------------: | :-------: | :-------: | :-------- |
| **Bubble sort**       | n               | n<sup>2</sup>       | n<sup>2</sup>       | 1         | Yes       |           |
| **Insertion sort**    | n               | n<sup>2</sup>       | n<sup>2</sup>       | 1         | Yes       |           |
| **Selection sort**    | n<sup>2</sup>   | n<sup>2</sup>       | n<sup>2</sup>       | 1         | No        |           |
| **Heap sort**         | n&nbsp;log(n)   | n&nbsp;log(n)       | n&nbsp;log(n)       | 1         | No        |           |
| **Merge sort**        | n&nbsp;log(n)   | n&nbsp;log(n)       | n&nbsp;log(n)       | n         | Yes       |           |
| **Quick sort**        | n&nbsp;log(n)   | n&nbsp;log(n)       | n<sup>2</sup>       | log(n)    | No        | Quicksort is usually done in-place with O(log(n)) stack space |
| **Shell sort**        | n&nbsp;log(n)   | depends on gap sequence   | n&nbsp;(log(n))<sup>2</sup>  | 1         | No         |           |
| **Counting sort**     | n + r           | n + r               | n + r               | n + r     | Yes       | r - biggest number in array |
| **Radix sort**        | n * k           | n * k               | n * k               | n + k     | Yes       | k - length of longest key |