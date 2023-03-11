#include "linearList.h"
//¥Ú”°À≥–Ú±Ì 
void sequenceList::print()
{
    cout << curNumberOfItem << ":";

    for(int i = 0; i < curNumberOfItem-1; i++)
    {
        cout << myList[i] << ",";
    }

    cout << myList[curNumberOfItem-1] << endl;
}






void linkList::print()
{
    curNode = firstNode;

    cout << listSize << ":";

    while(curNode != lastNode)
    {
        if(curNode->next == lastNode)
            cout << curNode->next->data << endl;
        else
        {
            cout << curNode->next->data << ",";
        }
        
        
        curNode = curNode->next;
    }
}
