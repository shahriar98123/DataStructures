//
//  FileController.hpp
//  DataStructures
//
//  Created by Shams, Shahriar on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp


#include "../Resources/Music.hpp"
#include <string>
#include "../Resources/CrimeData.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <<stream>

class FileController
{

public:
static vector<CrimeData> readCrimeDataToVector(string filename);
static vector<Music> musicDataToVector(string filename);
};
#endif /* FileController_hpp */
