#include <iostream>
using namespace std;
class stack
{
    char *arr;
    int size;
    int top;

public:
    stack(int size)
    {
        arr = new char[size];
        top = -1;
    }

    void push(char ele)
    {
        if (top > size - 1)
        {
            cout << "stack is full " << endl;
        }
        else
        {
            top++;
            arr[top] = ele;
        }
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "stack is empty " << endl;
        }
        else
        {
            top--;
        }
    }

    int peak()
    {
        if (top < 0)
        {
            cout << "stack is empty";
            return -1;
        }

        return arr[top];
    }

    bool isfull()
    {
        if (top == size)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


};

string remove(string s)
{
    string x;
    string y;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            x.push_back(s[i]);
        }
    }

    for (int i = 0; i < x.size(); ++i)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            y.push_back(x[i]);
        }
        else
        {
            char temp;
            temp = x[i] - 'A' + 'a';
            y.push_back(temp);
        }
    }

    return y;
}

int main()
{
    stack st(100);
    string n;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "enter string : " ;
    getline(cin, n);

    string rem = remove(n);
   // cout << n << endl << rem << endl;
  //MaDam
  //madam
    for(int i = 0; i < rem.size(); ++i)
    {
        char temp = rem[i];
        st.push(temp);
    }

    string cheak;

    while(!st.isempty())
    {
        char t = st.peak();
        cheak.push_back(t);
        st.pop();
    }

    cout << "Original string : ";
    cout << rem << endl;
    cout << "Reverse string : ";
    cout << cheak << endl;

    

    if(cheak == rem)
    {
        cout << "string is palindrom" << endl;
    }else{
        cout << "string is not palindrom" << endl; 
    }

    cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;


    return 0;
}
