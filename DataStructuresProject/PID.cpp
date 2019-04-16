//
// Created by braed on 4/8/2019.
//

#include "PID.h"
#include <iostream>
using namespace std;

PID::PID()
{

}

PID::~PID()
{

}

int PID::getCount()
{
    //returns the number of Compents on page
    return hashSize;
}

InstNode PID::getComponent(string tag)
{
    //returns ComponentNode with tag, tag

}

string PID::getDate ()
{
    //returns updatedLast
    return date;
}

void PID::setDate (string dateEnter)
{
    date = dateEnter;
}

void PID::addComponent (string tag, string page, string pipe, string dataSheet, string failPosition)
{
    //adds a componentNode to the hashTable
}


void PID::deleteComponent (string tag)
{
//removes a component from the page.
}

void PID::setRevision(string rev)
{
    //sets the revision number
    revision = rev;
}

string PID::getRevision()
{
    //gets the revision number
    return(revision);
}

void PID::getTypeComponents()
{
    //returns an array/maybe vectors of all of the the componentNodes that are a certain type
}
bool PID::checkComponent()
{
    //checks if a component is on the page and returns a bool
}

string PID::getNextPage()
{
    //returns next page
    return nextPage;
}

void PID::setNextPage(string nxtPage)
{
    //sets next page
    nextPage = nxtPage;

}

string PID::getPrevPage()
{
    //returns prevPage
    return previousPage;
}

void PID::setPrevPage()
{
    //sets prevPage
}