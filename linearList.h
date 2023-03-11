#include <iostream>

class sequenceList
{
private:
    float* myList;
    int curNumberOfItem;
    int maxCapcity;
    
public:
    sequenceList(const int&, const int&, float[]);
    ~sequenceList();

    bool addItem(const float&);
    bool insertItem(const int&,const float&);
    int deleteItem(const float&);
    bool locate(const int&, float&);
    int locate(const float&);
    void reverse();
    void print();
};

class linkList;
class listNode{
    friend class linkList;
    friend void merge(linkList&, linkList&);
private:
    float data;
    listNode* next;
    
public:
    listNode(){next = NULL;}
    listNode(float nodeData, listNode* succ = NULL);
    ~listNode();
};

class linkList
{
private:
    listNode* firstNode;
    listNode* curNode;
    listNode* lastNode;

    int listSize;
public:
    linkList();
    linkList(const int&, float[]);
    ~linkList();

    bool headInsertItem(const float&);          //��ֵͷ�� 
    bool tailInsertItem(const float&);          //��ֵβ�� 
    int insertItem(const int&,const float&);    //�����ض�λ�� 
    int deleteItem(const float&);               //��ֵɾ�� 
    bool locate(const int&, float&);            //��λ���� 
    int locate(const float&);                   //��ֵ���� 
    void ascendingOrder();                      //���� 
    void reverse();                             //���� 
    void print();                               //��ӡԪ�� 
    
};

void merge(linkList&, linkList&);

