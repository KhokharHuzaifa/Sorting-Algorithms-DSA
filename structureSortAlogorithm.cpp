// C++ program to demonstrate structure sorting in C++
#include <bits/stdc++.h>
using namespace std;
 
struct Student 
{
    string name; // Given
    int math; // Marks in math (Given)
    int phy; // Marks in Physics (Given)
    int che; // Marks in Chemistry (Given)
    int total; // Total marks (To be filled)
    int rank; // Rank of student (To be filled)
};

// Function for comparing two students according
// to given rules
bool compareTwoStudents(Student a, Student b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.total != b.total)
        return a.total > b.total;
 
    // If marks in Maths are same then
    // returns true for higher marks
    if (a.math != b.math)
        return a.math > b.math;
 
    if (a.phy != b.phy)
        return a.phy > b.phy;
 
    return (a.che > b.che);
}