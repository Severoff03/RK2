//
// Created by Сергей Северёв on 23.05.2022.
//

#ifndef RK2_TASKS_RK2_H
#define RK2_TASKS_RK2_H


class tasks_rk2 {

};


#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include <vector>
#include <utility>
#include <functional>
#include <iterator>
#include <string>
#include <cstring>

using namespace std;

//task1
struct Node {
    Node();
    Node(int nameNode);
    ~Node();

    Node* parent;
    std::list<Node*> listChilds;
    int name;
    static int countNodes;
};

class Graph {
private :
    Node* head;
    std::list<Node*> GList;
    int deep;
   //здесь можно писать любые функции, которые могут понадобиться
public :
    Graph();
    Graph(int countNodes);
    ~Graph();
    /*
        output		:	-1 - если функция не реализована
                    :	положительное число -- число узлов
        author		:
        date		:
        version		:
    */
    int buildTreeBFS(int countNodes);
    /*
        output		:	-1 - если функция не реализована
                    :	положительное число -- число узлов
        author		:
        date		:
        version		:
    */
    int buildTreeDFS(int countNodes);
    /*
        description	:	обход графа и записи вершин в файл
        input		:
        output		:
        author		:
        date		:
        version		:
    */
    void BFS();
    void DFS();
    /*
        description	:	функция поиска узла по его имени,
                        DFS - № студ билет чётный
                        BSD - № студ билет нечётный
        input 		:	nameNode -- имя узла
        output		:	{bool -- узел найде, list<int> -- список имён узлов до необходимого}
        description	:	приставка DFS -- поиск в глубину, BSF -- поиск в ширину
        author		:
        date		:
        version		:
    */
    std::pair<bool, list<int>> searchDFS(int nameNode);
    std::pair<bool, list<int>> searchBFS(int nameNode);
};

//task2


//task3
template<class T>
class Filo {
private :
    T* ar;	//массив
    int size;	//размер массива
    int countData;	//число элементов в массиве
public :
    Filo() {
        this->ar = new T[64];
        this->size = 64;
        countData = 0;
}
    Filo(int _size) {
        this->ar = new T[_size];
        this->size = _size;
        countData = 0;
}
    ~Filo() {
        if (this->ar != nullptr)
        {
            delete this->ar;
        }
}
    /*
        input		:	элемент который надо добавить
        output		:	1 - элемент добавлен, 0 - элемент не добавлен
        description	:	добавление элемента в конец массива
    */
    int push_back(T el) {
        if (countData == size)
        {
            return 0;
        }

        ar[countData] = el;
        countData++;

        return 1;
    }
    /*
        input		:	элемент который надо добавить
        output		:	пара
                        значение первого аргумента пары
                            1 - элемент успешно извлечён, 0 - элементов в массиве нет
                        значение второго аргумента пары -- это извлечённый элемент
        description	:	извлечение элемента из массива
    */
    pair<int,T> pop_back() {
        if (countData == 0)
        {
            return make_pair(0, 0);
        }

        countData--;

        return make_pair(1, ar[countData]);
    }
    /*
        input		:	элемент который надо добавить
        output		:	пара
                        значение первого аргумента пары
                            1 - элемент успешно извлечён, 0 - элементов в массиве нет
                        значение второго аргумента пары -- это извлечённый элемент
        description	:	извлечение элемента из массива
    */
    void returnAr() {

    }
};

//task4
template<class T>

ostream& operator<<(ostream& out, const pair<int,T> temp)
{
    out << "(" << temp.first << ", " << temp.second << ")" << std::endl;
    return out;
}


//task5
template<class T>
class CheckBrackets : public Filo<char> {
private:
    char chekpar(char chek)
    {
        switch (chek) {
            case '}':
                return '{';
                break;
            case ')':
                return '(';
                break;
            case ']':
                return '[';
                break;
        }

        return 0;
    };


      //можно объявляеть любые переменные и функции
public :
    CheckBrackets() : Filo<char>() { }
    ~CheckBrackets() {}
    /*
        input		:	строка со скобками
        output		:	0 - всё хорошо, -1 - скобок не хватает
        description	:	проверка скобок
    */
    int checkBrackets(const char* strBrackets) {
        auto length = strlen(strBrackets);
        if (length % 2 != 0)
        {
            return -1;
        }

        for (int i = 0; i < length; i++)
        {
            if (strBrackets[i]== '{' || strBrackets[i] == '(' || strBrackets[i] == '[')
            {
                push_back(strBrackets[i]);
            }
            else
            {
                auto p = pop_back();
                if (p.first == 0 || p.second != chekpar(strBrackets[i]))
                {
                    return -1;
                }
            }
        }
        return 1;
    };
    };


#endif //RK2_TASKS_RK2_H
