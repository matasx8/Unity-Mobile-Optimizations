// C# program to print DFS traversal
// from a given graph
using System;
using System.Collections.Generic;
 
// This class represents a directed graph
// using adjacency list representation
public
    class Graph {
    private int V; // No. of vertices
    private int goal;
    private bool stop;
    public Stack<int> path = new Stack<int>();
 
    // Array of lists for
    // Adjacency List Representation
    private List<int>[] adj;
 
    // Constructor
    public Graph(int v, int goal)
    {
        stop = false;
        V = v;
        this.goal = goal;
        adj = new List<int>[ v ];
        for (int i = 0; i < v; ++i)
            adj[i] = new List<int>();
    }
 
    // Function to Add an edge into the graph
    public void AddEdge(int v, int w)
    {
        adj[v].Add(w); // Add w to v's list.
    }
 
    // A function used by DFS
    void DFSUtil(int v, bool[] visited)
    {
        if (v == goal)
            stop = true;
        // Mark the current node as visited
        // and print it
        visited[v] = true;
        path.Push(v);

        if (stop)
            return;
 
        // Recur for all the vertices
        // adjacent to this vertex
        List<int> vList = adj[v];
        foreach(var n in vList)
        {
            if (!visited[n] && !stop)
                DFSUtil(n, visited);
        }
        if(!stop)
            path.Pop();
    }
 
    // The function to do DFS traversal.
    // It uses recursive DFSUtil()
    public void DFS(int v)
    {
        // Mark all the vertices as not visited
        // (set as false by default in c#)
        bool[] visited = new bool[V];
 
        // Call the recursive helper function
        // to print DFS traversal
        DFSUtil(v, visited);
    }
 
}
 
// This code is contributed by techno2mahi