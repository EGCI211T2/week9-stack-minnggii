#include <iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv)
{
    cout << "Checking the parentheses in argv arguments\n";

    for (int i = 1; i < argc; i++)
    {
        Stack s;
        bool correct = true;
        int count = 0;

        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] == '[' || argv[i][j] == '{')
            {
                s.push(argv[i][j]);
                count++;
            }
            else if (argv[i][j] == ']' || argv[i][j] == '}')
            {
              if(count == 0)
              {
                correct = false;
                break;
              }
                char x = s.pop();
                count--;

                if ((argv[i][j] == ']' && x != '[') ||
                    (argv[i][j] == '}' && x != '{'))
                {
                    correct = false;
                    break;
                }
            }
        }

        // check if stack still has extra opening brackets
        if (correct && count == 0)
            cout << "argv " << i << " correct\n";
        else if (count > 0)
            cout << "argv " << i << " incorrect: too many open parenthesis\n";
        else
            cout << "argv " << i << " incorrect\n";
    }

    return 0;
}