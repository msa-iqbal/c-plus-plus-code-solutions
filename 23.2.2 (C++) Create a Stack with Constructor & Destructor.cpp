/// Create a Stack with constructor & destructor

#include <iostream>
#include <stdio.h>
using namespace std;

#define SIZE 10

class stack
{
    char stck[SIZE];        // holds the stack
    int tos;                   // index of top of stack
public:
    stack();                   // Constructor
    ~stack();                 // Destructor
    void push(char ch); // push character on stack
    char pop();             // pop character from stack
};

// Initialize the stack
stack :: stack()
{
    cout<<" Constructing a stack... \n";
    tos=0;
}

stack :: ~stack()
{
    cout<<" Destructing a stack... \n";
}
// Push a character
void stack :: push(char ch)
{
    if (tos==SIZE)
    {
        cout<<" Stack is full \n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

// Pop a character
char stack :: pop()
{
    if(tos==0)
    {
        cout<<" Stack is Empty \n";
        return 0; // return null on empty stack
    }
    tos--;
    return stck[tos];
}

int main()
{
    // Create two stacks that are automatically initialized
    stack s1, s2;
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0; i<3; i++)
    {
        cout<<" Pop s1: "<<s1.pop()<<" \n";
    }

    for(i=0; i<3; i++)
    {
        cout<<" Pop s2: "<<s2.pop()<<" \n";
    }
    return 0;
}


/* ===== Output/Result:

 Input:___________________
 (Initialization values within a program code)

 Output:_________________
 Constructing a stack...
 Constructing a stack...
 Pop s1: c
 Pop s1: b
 Pop s1: a
 Pop s2: z
 Pop s2: y
 Pop s2: x
 Destructing a stack...
 Destructing a stack...
*/



