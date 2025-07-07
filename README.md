# Approximating the Number of Connected Components on an Undirected Transitive Graph in Sublinear Time

## How to use it?
Check `approxCCDegree.cpp` for the code, and `sample.cpp` for a sample implementation.

## Time Complexity
O(log(d / ε))

## Approximation Bounds
The number of connected components is within `εn` with probability `1 - δ`.

## Idea
Lemma 1:<br>
Let n<sub>u</sub> be the number of nodes in the connected component where the node u is located.<br>
The number of connected component = sum(1 / n<sub>u</sub>) for all node u.<br>
Prove:<br>
See *Source*<br><br>
Therefore, we can use a subsample to approximate the number of connected components by randomly selecting nodes, and calculating their n<sub>u</sub> through breadth-first search (bfs) to achieve O((d / ε<sup>2</sup>) * log(d / ε)).<br>
However, notice that the time complexity bottleneck (linear factor) is at bfs.<br>
To simplify the condition, I considered an undirected transistive graph.<br><br>
Lemma 2:<br>
For an undirected transitive graph, n<sub>u</sub> = degree(u) + 1.<br>
Prove:<br>
It was revealed to me in a dream.<br><br>
As a result, I am able to create an implementation that is able to approximate the number of connected components for an undirected transitive graph in sublinear time.

## Source
This algorithm is based on [Lecture 5: Bounded Degree Graph Algorithms, CSCI 1951-W Sublinear Algorithms for Big Data](https://cs.brown.edu/courses/csci1951-w/lec/lec%205%20notes.pdf), where it introduced approximating numbers of connected components on an undirected graph in general.

The code is implemented on 24th June 2025 by [Joshua CHOI](https://joshuasyss.github.io/).
