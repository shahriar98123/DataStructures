//
//  Controller.cpp
//  DataStructures
//
//  Created by Shams, Shahriar on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    usingNodes();
    testFiles();
}

void Controller :: usingNodes ()
{
    LinearNode<int> mine(50);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData()<< endl;
}
void Controller :: testFiles()
{
    vector<Music> musicVector = FileController :: musicDataToVector("/Users/ssha7332/Documents/C++/DataStructures/DataStructures/Resources/music.csv");
    for(int index = 234; index < 255; index++)
    {
        cout << index<< ": contents are: " << musicVector[index]<< endl;
    }
    vector<CrimeData> crimeVector = FileController :: readCrimeDataToVector("/Users/ssha7332/Documents/C++/DataStructures/DataStructures/Resources/crime.csv");
    for(int index = 234; index < 255; index++)
    {cout << index << ": contents are: " << crimeVector[index]<< endl;}
    
}
    
                                                                
