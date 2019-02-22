//
//  FileController.hpp
//  DataStructures
//
//  Created by Shams, Shahriar on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include <assert.h>
#include <iostream>

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

using namespace std;

class FileController
{

public:
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    static vector<Music> musicDataToVector(string filename);
};
#endif /* FileController_hpp */
