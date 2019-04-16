//
// Created by braed on 4/8/2019.
//
#ifndef DATASTRUCTURESPROJECT_PID_H
#define DATASTRUCTURESPROJECT_PID_H
#include <iostream>

using namespace std;

struct InstNode
{
    string tag;
    string page;//maybe a pointer
    string pipe;
    string dataSheet;
    string failPosition;
    string vendor;
};

class PID {
    public:
        PID();
        ~PID();
        int getCount();
            //gets the number of Compents in P%ID(total of hashtable
        InstNode getComponent(string tag);
            //returns ComponentNode
        string getDate ();
            //returns updatedLast
        void setDate (string dateEnter);
            //sets updatedLast
        void addComponent (string tag, string page, string pipe, string dataSheet, string failPosition);
            //adds a componentNode to the hashTable
        void deleteComponent (string tag);
            //removes a component from the page.
        void setRevision(string rev);
            //sets the revision number
        string getRevision();
            //gets the revision number
        void getTypeComponents();
            //returns a linked list of all of the the componentNodes that are a certain type
        bool checkComponent();
            //checks if a component is on the page and returns a bool
        string getNextPage();
            //returns next page
        void setNextPage(string nxtPage);
            //sets next page
        string getPrevPage();
            //returns prevPage
        void setPrevPage();
            //sets prevPage
        string getVendor();
             //gets vendor status on a part

    private:
        int hashArraySize; //stores the size of the hash table
        int hashSize; //store the number of components in the hash table
        string nextPage;
        string previousPage;
        string date;
        string revision;
       // string [50] pipelines;//store all pipelines on page

};


#endif //DATASTRUCTURESPROJECT_PID_H
