#include<iostream>

using namespace std;

int main()
{
    string str;
    int size, top=-1, flag=1;
    cout<<"Enter the string: ";
    cin>>str;
    size = str.length();
    char arr[size];

    for(int i=0; i<size; i++)
    {
        char ch = str[i];
        if(ch=='[' || ch=='{' || ch=='(')
        {
            top++;
            arr[top] = ch;
        }
        else
        {
            if(ch==')')
            {
                if(arr[top] == '(')
                {
                    top--;
                }
                else
                {
                    flag =0;
                    break;
                }
            }
            else if(ch=='}')
            {
                if(arr[top] == '{')
                {
                    top--;
                }
                else
                {
                    flag =0;
                    break;
                }
            }
            else if(ch == ']')
            {
                if(arr[top] == '[')
                {
                    top--;
                }
                else
                {
                    flag =0;
                    break;
                }
            }
        }
    }
    if(top==-1 && flag ==1)
    {
        cout<<"Valid";
    }
    else
    {
        cout<<"Invalid";
    }
}
