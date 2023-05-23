#include <iostream>

class Stack
{
private:

public:
    int* mArr;
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
        mTop++;
        mArr[mTop] = value;
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
            return retVal;
        }
    }

    int size()
    {
        return mTop+1;
    }

    bool isEmpty()
    {
        return mTop == -1;
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
    int numOp;
    std::cin >> numOp;

    Stack* aStack = new Stack(numOp);
    int num;

    for (int i = 0; i < numOp; i++)
    {
        std::cin >> num;
        if (num == 0)
        {
            aStack->pop();
        }
        else
        {
            aStack->push(num);
        }
    }

    int sum = 0;
    while (aStack->mTop != -1)
    {   
        sum += aStack->pop();
    }
    std::cout << sum << std::endl;
}
