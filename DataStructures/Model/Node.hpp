//
//  Node.hpp
//  DataStructures
//
//  Created by Shams, Shahriar on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_h
#define Node_h


#include <assert.h>
template <class Type>
class Node
{
private:
    type data;
public:
    Node(Type data);
    Type getData();
    void setData(Type data);
};

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
template <class Type>
Type Node<Type> :: setData(Type data)
{
    this->data = data;
}


#endif /* Node_h */
