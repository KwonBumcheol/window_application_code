#include "Stack.h"

Stack::Stack(int sz /*= 10*/){
    idx = 0;
    buff = new int[sz]; 
}

void Stack::push(int v){
    buff[idx++] = v;
}

int Stack::pop(){
    return buff[--idx];
}

Stack::~Stack(){
    delete[] buff;
}