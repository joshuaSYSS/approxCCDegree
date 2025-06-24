# Approximating the Number of Connected Components on an Undirected Transistive Graph in Sublinear Time

## How to use it?
Check `approxCC.cpp` for the code, and `sample.cpp` for a sample implementation.

## Time Complexity
O(log(d / ε))

## Approximation Bounds
The number of connected component is within `εn` with probability `1 - δ`.

## Idea
Lemma 1:<br>
Let n<sub>u</sub> be the number of nodes in the connected component where the node u is located.<br>
The number of connected component = sum(1 / n<sub>u</sub>) for all node u.<br><br>
Prove:<br>
For a component C, (sum(1 / n<sub>u</sub>) for all node u ∈ C) = 1.<br><br>
Therefore, we can use a subsample to approximate the number of connected components by randomly selecting nodes, and calculating their n<sub>u</sub> through breadth-first search (bfs) to achieve O(n * logn).<br>
However, notice that the time complexity bottleneck is at bfs.<br>
Thus, I considered a transistive undirected graph, as we know that n<sub>u</sub> = degree(u) + 1. As a result, I am able to create an implementation that is able to approximate the number of connected components for an undirected transistive graph in sublinear time.

## Source
This algorithm is based on Lecture 5: Bounded Degree Graph Algorithms, CSCI 1951-W Sublinear Algorithms for Big Data, where it introduced approximating numbers of connected components on an undirected graph in general.

Code is implemented on 24th June, 2025, by [Joshua CHOI](https://joshuasyss.github.io/).
