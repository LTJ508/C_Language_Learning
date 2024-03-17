#include <iostream>
#include "heaptype.cpp"
#include "stacktype.h"
#include "quetype.h"
using namespace std;

int main()
{
    GraphType<char> myGraph(8);
    char ch, from, to;
    int weight;

    cout << "Enter 8 Vertex of Char Type: ";
    for(int i = 0; i < 8; i++){
        cin >> ch;
        myGraph.AddVertex(ch);
    }

    cout << "Add edge formate: from to weight for 10 edge: ";
    for(int  i = 0; i < 10; i++){
        cin >> from;
        cin >> to;
        cin >> weight;
        myGraph.AddEdge(from, to, weight);
    }

    //printing out degree
    cout << "Enter a Vertex for its Out Degree: ";
    cin >> ch;
    cout << "Out Degree of " << ch << ": " << myGraph.OutDegree(ch) << endl << endl;

    //Printing edge availability
    cout << "Enter two vertex for finding edge: ";
    cin >> from;
    cin >> to;
    cout << "Edge Between " << from << " and " << to << ": " <<
    (myGraph.FoundEdge(from, to) ? "There is an edge.\n" : "There is no edge.\n");


    //Printing edge availability
    cout << "Enter two vertex for finding edge: ";
    cin >> from;
    cin >> to;
    cout << "Edge Between " << from << " and " << to << ": " <<
    (myGraph.FoundEdge(from, to) ? "There is an edge.\n" : "There is no edge.\n");

    //Depth first search
    cout << "Enter two vertex for finding path using DFS: ";
    cin >> from;
    cin >> to;
    cout << "Path from " << from << " to " << to << " using Depth First Search: ";
    myGraph.DepthFirstSearch(from, to);

    //Depth first search
    cout << "Enter two vertex for finding path using DFS: ";
    cin >> from;
    cin >> to;
    cout << "Path from " << from << " to " << to << " using Depth First Search: ";
    myGraph.DepthFirstSearch(from, to);

    //Breadth first search
    cout << "Enter two vertex for finding path using BFS: ";
    cin >> from;
    cin >> to;
    cout << "Path from " << from << " to " << to << " using Depth First Search: ";
    myGraph.BreadthFirstSearch(from, to);


    //Breadth first search
    cout << "Enter two vertex for finding path using BFS: ";
    cin >> from;
    cin >> to;
    cout << "Path from " << from << " to " << to << " using Depth First Search: ";
    myGraph.BreadthFirstSearch(from, to);

    //Shortest Path
    //Breadth first search
    cout << "Enter two vertex for finding path using BFS: ";
    cin >> from;
    cin >> to;
    cout << "Path from " << from << " to " << to << " using Depth First Search: ";
    myGraph.BreadthFirstSearch(from, to);
    cout << "Shortest Path Weight: " << myGraph.BreadthFirstSearch(from, to);

    return 0;
}
