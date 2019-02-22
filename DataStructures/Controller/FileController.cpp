//
//  FileController.cpp
//  DataStructures
//
//  Created by Shams, Shahriar on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//



#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
        {
            
            if(currentCSVLine.length() != 0)
            {
                CrimeData row(currentCSVLine);
                crimeVector.push_back(row);
            }
            
        }
            rowCount++;
    }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicVector;
    
    LinkedList<CrimeData> FileController :: readDataToList(string filename)
    {
        LinkedList<CrimeData> crimes;
        
        string currentCSVLine;
        int rowCount = 0;
        
        ifstream dataFile(filename);
        
        if (dataFile.is_open())
        {
            while (!dataFile.eof())
            {
                getline(dataFile, currentCSVLine, '\r');
                if (rowCount != 0)
                {
                    if (currentCSVLine.length() != 0)
                    {
                        CrimeData row(currentCSVLine);
                        crimes.add(row);
                    }
                }
                rowCount++;
            }
            dataFile.close();
        }
        else
        {
            cerr << "NO FILE" << endl;
        }
        return crimes;
    }
}
