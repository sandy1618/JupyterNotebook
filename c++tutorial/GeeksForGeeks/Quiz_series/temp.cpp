  #include <iostream>
    #include <string>
    using namespace std;
    int main ()
    {
        string str ("Microsoft");
        for (size_t i = 0; i < str.length();i++)
        {
            cout << str.at(i);
        }
        return 0;
    }