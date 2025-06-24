#include <bits/stdc++.h>
using namespace std;
void readgraph(int m, vector<vector<int>>& graph) {
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v; //There is an edge connecting node u and v
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}

/// <summary>
/// The main function for approximating the number of connected components on a transistive undirected graph.
/// </summary>
/// <param name="n">The number of nodes</param>
/// <param name="m">The number of edges</param>
/// <param name="graph">The graph represented as an adjacency list</param>
/// <param name="EPS">Epsilon for the margin of error</param>
/// <param name="delta">Delta for the probability for this code to return a value within the margin of error</param>
/// <returns>Returns the approximation the number of connected components in decimals.</returns>
double approxCC(int n, int m, vector<vector<int>>& graph, double EPS, double delta) {
    srand(time(NULL));
    int k = 1.0 / EPS * log(1.0 / delta);
    double res = 0;
    for (int i = 0; i < k; i++) {
        int u = rand() % n;
        int end = 2.0 / EPS;
        int degree = graph[u].size() + 1;
        res += 1.0 / (double)degree;
    }
    res *= (double)n / (double)k;
    return res;
}

int main(void){
  int n; //Number of nodes
  int m; //Number of edges
  cin >> n >> m;
  vector<vector<int>> graph(n); //The graph represented by adjacency lists. 0-indexed
  readgraph(m, graph);
  n_u = vector<int>(n, -1); //-1 denotes the node has not been visited
  double EPS = 0.1; //Epsilon, Margin of error
  double delta = 0.1; //Delta, Probability for this code to return a value within the margin of error
  double ans = approxCC(n, m, graph, EPS, delta);
  
  return 0;
}
