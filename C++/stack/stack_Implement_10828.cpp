#include <iostream>
#include <string>

class Stack
{
private:

public:
    int* mArr;
    int mSize = 0;
    int mTop = -1;

private:


public:
    Stack(int arrSize)
    {
        mArr = new int[arrSize];
    }

    ~Stack()
    {
        delete[] mArr;
        mArr = nullptr;
    }

    void push(int value)
    {
        mTop ++;
        mArr[mTop] = value;
        mSize++;
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            int retVal = mArr[mTop];
            mTop--;
            mSize--;
            return retVal;
        }
    }

    int size()
    {
        return mSize;
    }

    bool isEmpty()
    {
        return mSize == 0;
    }

    int top()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return mArr[mTop];
        }
    }

};


int main()
{   

    int num_inputs;
    std::cin >> num_inputs;
    Stack* aStack = new Stack(num_inputs);

    std::string inst;
    int inst_input;
    for (int i=0; i < num_inputs; i++)
    {
        std::cin >> inst;
        if (inst == "push")
        {
            std::cin >> inst_input;
            aStack->push(inst_input);
        }
        else if (inst == "pop")
        {   
            std::cout << aStack->pop() << std::endl;
        }
        else if (inst == "size")
        {
            std::cout << aStack->size() << std::endl;
        }
        else if (inst == "empty")
        {
            std::cout << (int)aStack->isEmpty() << std::endl;
        }
        else if (inst == "top")
        {
            std::cout << aStack->top() << std::endl;
        }
    }
}