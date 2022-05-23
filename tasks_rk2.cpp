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
Graph::~Graph() {}
int Graph::buildTreeBFS(int countNodes) {}
int Graph::buildTreeDFS(int countNodes) {}
void Graph::BFS() {}
void Graph::DFS() {}
std::pair<bool, list<int>> Graph::searchDFS(int nameNode)	 {}
std::pair<bool, list<int>> Graph::searchBFS(int nameNode)	{}

//task2
pair<int/*index el*/,int /*count call*/> binSearch(int* ar, int sizeAr, int el) {}


//task3

//task4

//task5
