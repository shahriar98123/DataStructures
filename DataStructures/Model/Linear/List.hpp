//
//  List.hpp
//  DataStructures
//
//  Created by Shams, Shahriar on 2/8/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
#include "../Nodes/LinearNode.hpp"
template <class Type>
class List
{
    


protected:
int size;
virtual void add(Type item) =0;
virtual void addAtIndex(int index, Type item) = 0;
virtual Type remove(int index) = 0;
virtual Type getFromIndex(int index) = 0;
virtual int getSize() = 0;
virtual LinearNode<Type> * getFront() = 0;
virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
