#include "Test.h"

Test::Test(){}

bool Test::emptyListCheckTest()
{
    LinkedListOfInts list;
    
    if(list.isEmpty())
    {
        return true;
    }
    return false;
}

bool Test::populatedListCheckTest()
{
    LinkedListOfInts list;
    int listSize = 50;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
    }
    if(list.isEmpty())
    {
        return false;
    }
    return true;
}

bool Test::emptySizeTest()
{
    LinkedListOfInts list;
    
    if(list.size() == 0)
    {
        return true;
    }
    return false;
}

bool Test::addBackSizeTest()
{
    LinkedListOfInts list;
    int listSize = 50;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
    }
    if(list.size() == listSize)
    {
        return true;
    }
    return false;
}

bool Test::singleAddBackSizeTest()
{
    LinkedListOfInts list;

    list.addBack(0);

    if(list.size() == 1)
    {
        return true;
    }
    return false;
}

bool Test::addFrontSizeTest()
{
    LinkedListOfInts list;
    int listSize = 50;

    for(int i=0; i<listSize; i++)
    {
        list.addFront(i);
    }
    if(list.size() == listSize)
    {
        return true;
    }
    return false;
}

bool Test::singleAddFrontSizeTest()
{
    LinkedListOfInts list;

    list.addFront(0);

    if(list.size() == 1)
    {
        return true;
    }
    return false;
}

bool Test::removeBackSizeTest()
{
    LinkedListOfInts list;
    int listSize = 50;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
    }
    list.removeBack();

    if(list.size() == 49)
    {
        return true;
    }
    return false;
}

bool Test::removeFrontSizeTest()
{
    LinkedListOfInts list;
    int listSize = 50;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
    }
    list.removeFront();

    if(list.size() == 49)
    {
        return true;
    }
    return false;
}

bool Test::emptyListSearchTest()
{
    LinkedListOfInts list;
    
    if(list.search(0))
    {
        return false;
    }
    return true;
}

bool Test::positiveSearchTest()
{
    LinkedListOfInts list;
    int listSize = 50;
    int* array = new int[listSize];

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
        array[i] = i;
    }
    for(int i=0; i<listSize; i++)
    {
        if(!list.search(i))
        {
            return false;
        }
    }
    return true;
}

bool Test::negativeSearchTest()
{
    LinkedListOfInts list;
    int listSize = 50;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
    }
    if(list.search(51))
    {
        return false;
    }
    return true;
}

bool Test::addBackTest()
{
    LinkedListOfInts list;
    int listSize = 50;
    int* array = new int[50];

    for(int i=0; i<listSize; i++)
    {
        list.addBack(i);
        array[i] = i;
    }
    vector<int> listVector = list.toVector();

    for(int i=0; i<listSize; i++)
    {
        if(array[i] != listVector.at(i))
        {
            cout<<"Expected List:"<<endl;
            for(int i=0; i<listSize; i++)
            {
                cout<<array[i]<<", ";
            }
            cout<<"\nActual List:"<<endl;
            for(int i=0; i<listVector.size(); i++)
            {
                cout<<listVector.at(i)<<", ";
            }
            cout<<endl;
            cout<<"Linked List addBack unsuccessful for index: "<<i<<endl;
            return false;
        }
    }
    return true;
}

bool Test::addFrontTest()
{
    LinkedListOfInts list;
    int listSize = 50;
    int* array = new int[50];

    for(int i=0; i<listSize; i++)
    {
        list.addFront(i);
        array[49-i] = i;
    }
    vector<int> listVector = list.toVector();

    for(int i=0; i<listSize; i++)
    {
        if(array[i] != listVector.at(i))
        {
            cout<<"Expected List:"<<endl;
            for(int i=0; i<listSize; i++)
            {
                cout<<array[i]<<", ";
            }
            cout<<"\nActual List:"<<endl;
            for(int i=0; i<listVector.size(); i++)
            {
                cout<<listVector.at(i)<<", ";
            }
            cout<<endl;
            cout<<"Linked List addFront unsuccessful for index: "<<i<<endl;
            return false;
        }
    }
    return true;
}

bool Test::removeBackTest()
{
    LinkedListOfInts list;
    int listSize = 50;
    vector<int> checkVector;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(49-i);
        checkVector.push_back(i);
    }
    list.removeBack();
    checkVector.pop_back();
    vector<int> listVector = list.toVector();

    if(listVector.size() != checkVector.size())
    {
        cout<<"Expected List:"<<endl;
        for(int i=0; i<checkVector.size(); i++)
        {
            cout<<checkVector.at(i)<<", ";
        }
        cout<<"\nActual List:"<<endl;
        for(int i=0; i<listVector.size(); i++)
        {
            cout<<listVector.at(i)<<", ";
        }
        cout<<endl;
        return false;
    }
    for(int i=0; i<listVector.size(); i++)
    {
        if(checkVector.at(i) != listVector.at(i))
        {
            cout<<"Expected List:"<<endl;
            for(int i=0; i<checkVector.size(); i++)
            {
                cout<<checkVector.at(i)<<", ";
            }
            cout<<"\nActual List:"<<endl;
            for(int i=0; i<listVector.size(); i++)
            {
                cout<<listVector.at(i)<<", ";
            }
            cout<<endl;
            cout<<"Linked List removeBack unsuccessful for index: "<<i<<endl;
            return false;
        }
    }
    return true;
}

bool Test::removeFrontTest()
{
    LinkedListOfInts list;
    int listSize = 50;
    vector<int> checkVector;

    for(int i=0; i<listSize; i++)
    {
        list.addBack(49-i);
        checkVector.push_back(i);
    }
    list.removeFront();
    checkVector.erase(checkVector.begin());
    vector<int> listVector = list.toVector();

    if(listVector.size() != checkVector.size())
    {
        cout<<"Expected List:"<<endl;
        for(int i=0; i<checkVector.size(); i++)
        {
            cout<<checkVector.at(i)<<", ";
        }
        cout<<"\nActual List:"<<endl;
        for(int i=0; i<listVector.size(); i++)
        {
            cout<<listVector.at(i)<<", ";
        }
        cout<<endl;
        return false;
    }
    for(int i=0; i<listVector.size(); i++)
    {
        if(checkVector.at(i) != listVector.at(i))
        {
            cout<<"Expected List:"<<endl;
            for(int i=0; i<checkVector.size(); i++)
            {
                cout<<checkVector.at(i)<<", ";
            }
            cout<<"\nActual List:"<<endl;
            for(int i=0; i<listVector.size(); i++)
            {
                cout<<listVector.at(i)<<", ";
            }
            cout<<endl;
            cout<<"Linked List removeFront unsuccessful for index: "<<i<<endl;
            return false;
        }
    }
    return true;
}

bool Test::emptyRemoveBackTest()
{
    LinkedListOfInts list;

    if(list.removeBack())
    {
        return false;
    }
    return true;
}

bool Test::emptyRemoveFrontTest()
{
    LinkedListOfInts list;

    if(list.removeFront())
    {
        return false;
    }
    return true;
}

void Test::run()
{
    cout<<"RUNNING TESTS..."<<endl<<endl<<endl;
    cout<<"Test 1: \nisEmpty returns true on empty list: "<<(emptyListCheckTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 2: \nisEmpty returns false on populated list: "<<(populatedListCheckTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 3: \nsize returns 0 on empty list: "<<(emptySizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 4: \nsize returns correct size after single addBack: "<<(singleAddBackSizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 5: \nsize returns correct size after multiple addBack: "<<(addBackSizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 6: \nsize returns correct size after single addFront: "<<(singleAddFrontSizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 7: \nsize returns correct size after multiple addFront: "<<(addFrontSizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 8: \nsize returns correct size after removeBack: "<<(removeBackSizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 9: \nsize returns correct size after removeFront: "<<(removeFrontSizeTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 10: \nsearch returns false on empty list: "<<(emptyListSearchTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 11: \nsearch returns true when element is in list: "<<(positiveSearchTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 12: \nsearch returns false when element is not in list: "<<(negativeSearchTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 13: \n";
    cout<<"addBack method works: "<<(addBackTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 14: \n";
    cout<<"addFront method works: "<<(addFrontTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 15: \n";
    cout<<"removeBack method works: "<<(removeBackTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 16: \n";
    cout<<"removeFront method works: "<<(removeFrontTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 17: \nremoveFront returns false on empty list: "<<(emptyRemoveFrontTest()? "PASSED":"FAILED")<<endl;
    cout<<"Test 18: \nrmeoveBack returns false on empty list: "<<(emptyRemoveBackTest()? "PASSED":"FAILED")<<endl;
}