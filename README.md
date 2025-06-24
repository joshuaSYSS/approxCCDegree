# Approximating the Number of Connected Components on an Undirected Transistive Graph in Sublinear Time

## Source
This implementation is based on my [previous](https://github.com/joshuaSYSS/ApproxCC) implementation on an undirected graph.

## Idea
As previously mentioned, the number of connected component = sum(1 / n<sub>u</sub>) for all node u on an undirected graph.<br>
By expanding on this knowledge, and since we know that n<sub>u</sub> = degree(u) + 1 for a transistive undirected graph, I am able to create an implementation that is able to reduce the complexity by removing the time complexity bottleneck, which is the breadth-first search, for approximating the number of connected components for a transistive undirected graph.

## Time Complexity
O(log(d / ε))

Code is implemented on 24th June, 2025, by [Joshua CHOI](https://joshuasyss.github.io/).
