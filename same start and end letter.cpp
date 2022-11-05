#include <bits/stdc++.h>
using namespace std;
 
// States of DFA
void q1(string, int);
void q2(string, int);
void q3(string, int);
void q4(string, int);
 
// Function for the state Q1
void q1(string s, int i)
{
 
    // Condition to check end of string
    if (i == s.length()) {
        cout << "string is ACCEPTED by the DFA!! \n";
        return;
    }
 
    // State transitions
    // 'a' takes to q1, and
    // 'b' takes to q2
    if (s[i] == 'a')
        q1(s, i + 1);
    else
        q2(s, i + 1);
}
 
// Function for the state Q2
void q2(string s, int i)
{
    // Condition to check end of string
    if (i == s.length()) {
        cout << "string is NOT ACCEPTED by the DFA!!  \n";
        return;
    }
 
    // State transitions
    // 'a' takes to q1, and
    // 'b' takes to q2
    if (s[i] == 'a')
        q1(s, i + 1);
    else
        q2(s, i + 1);
}
 
// Function for the state Q3
void q3(string s, int i)
{
    // Condition to check end of string
    if (i == s.length()) {
        cout << "string is ACCEPTED by the DFA!! \n";
        return;
    }
 
    // State transitions
    // 'a' takes to q4, and
    // 'b' takes to q3
    if (s[i] == 'a')
        q4(s, i + 1);
    else
        q3(s, i + 1);
}
 
// Function for the state Q4
void q4(string s, int i)
{
    // Condition to check end of string
    if (i == s.length()) {
        cout << "string is NOT ACCEPTED by the DFA!!  \n";
        return;
    }
 
    // State transitions
    // 'a' takes to q4, and
    // 'b' takes to q3
    if (s[i] == 'a')
        q4(s, i + 1);
    else
        q3(s, i + 1);
}
 
// Function for the state Q0
void q0(string s, int i)
{
 
    // Condition to check end of string
    if (i == s.length()) {
        cout << "string is NOT ACCEPTED by the DFA!! \n";
        return;
    }
 
    // State transitions
    // 'a' takes to q1, and
    // 'b' takes to q3
    if (s[i] == 'a')
        q1(s, i + 1);
    else
        q3(s, i + 1);
}
 
// Driver Code
int main()
{
    string s = "abbaaba";
 
    // Since q0 is the starting state
    // Send the string to q0
    q0(s, 0);
}
