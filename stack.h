
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};

Stack::Stack(){
    //initialize stack
    top = NULL;
    size = 0;
}

void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
    new_node -> set_next(top);
    top = new_node;
    size++;
  }
         // Left missing for exercises…
    
}

int Stack::pop(){
    if(size > 0)
    {
        NodePtr t = top;
        int value;
        value = t -> get_value();
        top = t -> get_next();

        delete t;
        size--;
        return value;
    }
    else
    {
        cout<<"Empty stack" <<endl;
    }
	//be careful of the empty stack!!!
}

Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    while(size > 0)
    {
        pop();
    }
    cout<<"Cleared all nodes" <<endl;
    
}

#endif
