#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

using namespace std;

class Test
{
    public:
    
    Test();

    bool emptyListCheckTest();
    bool populatedListCheckTest();
    bool emptySizeTest();
    bool addBackSizeTest();
    bool singleAddBackSizeTest();
    bool addFrontSizeTest();
    bool singleAddFrontSizeTest();
    bool removeBackSizeTest();
    bool removeFrontSizeTest();
    bool emptyListSearchTest();
    bool positiveSearchTest();
    bool negativeSearchTest();
    bool addBackTest();
    bool addFrontTest();
    bool removeBackTest();
    bool removeFrontTest();
    bool emptyRemoveFrontTest();
    bool emptyRemoveBackTest();

    void run();

};