//
// Created by Сергей Северёв on 23.05.2022.
//

#include <map>
#include <list>

#include "tasks_rk2.h"

//task1
Node::Node() {
    this->name = 0;
    this->countNodes = 0;
    this->parent = nullptr;
}
Node::Node(int nameNode) {
    name = nameNode;
}
Node::~Node() {
    delete parent;
}

Graph::Graph() {
    Node* temp = new Node;
    head = temp;

    head->name = 0;
    deep = 0;
}
Graph::Graph(int countNodes) {

}
Graph::~Graph() {
    delete head;
}
int Graph::buildTreeBFS(int countNodes) {}
int Graph::buildTreeDFS(int countNodes) {}
void Graph::BFS() {}
void Graph::DFS() {}
std::pair<bool, list<int>> Graph::searchDFS(int nameNode)	 {}
std::pair<bool, list<int>> Graph::searchBFS(int nameNode)	{}

//task2

pair<int/*index el*/, int /*count call*/> binSearchRec(int* ar, int first, int last, int index_el, int chek)
{
    if(last - first >= 1)
    {
        if(ar[last] == index_el)
        {
            return std::make_pair(last, chek);
        }

        if(ar[first] == index_el)
        {
            return std::make_pair(first, chek);
        }

    }
    else
    {
        return std::make_pair(-1, chek);
    }

    int mid = ar[(last + first) / 2];

    if(mid >= index_el)
    {
        chek++;
        binSearchRec(ar, first, (last + first) / 2, index_el, chek );
    }
    else
    {
        chek++;
        binSearchRec (ar, (last + first) / 2, last, index_el, chek );
    }
}

pair<int/*index el*/,int /*count call*/> binSearch(int* ar, int sizeAr, int el) {
    return binSearchRec(ar, 0, sizeAr-1, el, 1);
}


//task3

// Look to .h

//task4
// Look to .h

//task5
// Look to .h