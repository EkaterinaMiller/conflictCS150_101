/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-10-23
 * 
 * @copyright Copyright (c) 2024
 * @compile: g++ -Wall main.cpp 
 * @run:./a.out
 */
#include <iostream>
using namespace std;
void say(string word);
int main()
{
    cout<<"My name is Tom\n";
    cout<<"hello world\n";
    say("Hi");
    return 0;
}
void say(string word)
{
    cout<<word<<endl;
}