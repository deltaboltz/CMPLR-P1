#ifndef FSA_H
#define FSA_H
#include <map>

static std::map<int, std::map<int,int>> fsa = {
    {1, {//start state
        { -1, 1005},
        {  9, 1},
        { 10, 1},
        { 11, 1},
        { 13, 1},
        { 32, 1},
        { 35, 11},
        { 37, 7},
        { 40, 7},
        { 41, 7},
        { 42, 7},
        { 43, 7},
        { 44, 7},
        { 45, 7},
        { 46, 7},
        { 47, 7},
        { 48, 3},
        { 49, 3},
        { 50, 3},
        { 51, 3},
        { 52, 3},
        { 53, 3},
        { 54, 3},
        { 55, 3},
        { 56, 3},
        { 57, 3},
        { 58, 7},
        { 59, 7},
        { 60, 5},
        { 61, 4},
        { 62, 6},
        { 65, -1},
        { 66, -1},
        { 67, -1},
        { 68, -1},
        { 69, -1},
        { 70, -1},
        { 71, -1},
        { 72, -1},
        { 73, -1},
        { 74, -1},
        { 75, -1},
        { 76, -1},
        { 77, -1},
        { 78, -1},
        { 79, -1},
        { 80, -1},
        { 81, -1},
        { 82, -1},
        { 83, -1},
        { 84, -1},
        { 85, -1},
        { 86, -1},
        { 87, -1},
        { 88, -1},
        { 89, -1},
        { 90, -1},
        { 91, 7},
        { 93, 7},
        { 97, 2},
        { 98, 2},
        { 99, 2},
        {100, 2},
        {101, 2},
        {102, 2},
        {103, 2},
        {104, 2},
        {105, 2},
        {106, 2},
        {107, 2},
        {108, 2},
        {109, 2},
        {110, 2},
        {111, 2},
        {112, 2},
        {113, 2},
        {114, 2},
        {115, 2},
        {116, 2},
        {117, 2},
        {118, 2},
        {119, 2},
        {120, 2},
        {121, 2},
        {122, 2},
        {123, 7},
        {125, 7}
    }},
    {2, {//lowercase letter was recognized (id or keyword)
        { -1, 1001},
        {  9, 1001},
        { 10, 1001},
        { 11, 1001},
        { 13, 1001},
        { 32, 1001},
        { 35, 1001},
        { 37, 1001},
        { 40, 1001},
        { 41, 1001},
        { 42, 1001},
        { 43, 1001},
        { 44, 1001},
        { 45, 1001},
        { 46, 1001},
        { 47, 1001},
        { 48, 2},
        { 49, 2},
        { 50, 2},
        { 51, 2},
        { 52, 2},
        { 53, 2},
        { 54, 2},
        { 55, 2},
        { 56, 2},
        { 57, 2},
        { 58, 1001},
        { 59, 1001},
        { 60, 1001},
        { 61, 1001},
        { 62, 1001},
        { 65, 2},
        { 66, 2},
        { 67, 2},
        { 68, 2},
        { 69, 2},
        { 70, 2},
        { 71, 2},
        { 72, 2},
        { 73, 2},
        { 74, 2},
        { 75, 2},
        { 76, 2},
        { 77, 2},
        { 78, 2},
        { 79, 2},
        { 80, 2},
        { 81, 2},
        { 82, 2},
        { 83, 2},
        { 84, 2},
        { 85, 2},
        { 86, 2},
        { 87, 2},
        { 88, 2},
        { 89, 2},
        { 90, 2},
        { 91, 1001},
        { 93, 1001},
        { 95, 2},
        { 97, 2},
        { 98, 2},
        { 99, 2},
        {100, 2},
        {101, 2},
        {102, 2},
        {103, 2},
        {104, 2},
        {105, 2},
        {106, 2},
        {107, 2},
        {108, 2},
        {109, 2},
        {110, 2},
        {111, 2},
        {112, 2},
        {113, 2},
        {114, 2},
        {115, 2},
        {116, 2},
        {117, 2},
        {118, 2},
        {119, 2},
        {120, 2},
        {121, 2},
        {122, 2},
        {123, 1001},
        {125, 1001}
    }},
    {3, { //digit was recognized (integer)
        { -1, 1002},
        {  9, 1002},
        { 10, 1002},
        { 11, 1002},
        { 13, 1002},
        { 32, 1002},
        { 35, 1002},
        { 37, 1002},
        { 40, 1002},
        { 41, 1002},
        { 42, 1002},
        { 43, 1002},
        { 44, 1002},
        { 45, 1002},
        { 46, 1002},
        { 47, 1002},
        { 48, 3},
        { 49, 3},
        { 50, 3},
        { 51, 3},
        { 52, 3},
        { 53, 3},
        { 54, 3},
        { 55, 3},
        { 56, 3},
        { 57, 3},
        { 58, 1002},
        { 59, 1002},
        { 60, 1002},
        { 61, 1002},
        { 62, 1002},
        { 65, 1002},
        { 66, 1002},
        { 67, 1002},
        { 68, 1002},
        { 69, 1002},
        { 70, 1002},
        { 71, 1002},
        { 72, 1002},
        { 73, 1002},
        { 74, 1002},
        { 75, 1002},
        { 76, 1002},
        { 77, 1002},
        { 78, 1002},
        { 79, 1002},
        { 80, 1002},
        { 81, 1002},
        { 82, 1002},
        { 83, 1002},
        { 84, 1002},
        { 85, 1002},
        { 86, 1002},
        { 87, 1002},
        { 88, 1002},
        { 89, 1002},
        { 90, 1002},
        { 91, 1002},
        { 93, 1002},
        { 97, 1002},
        { 98, 1002},
        { 99, 1002},
        {100, 1002},
        {101, 1002},
        {102, 1002},
        {103, 1002},
        {104, 1002},
        {105, 1002},
        {106, 1002},
        {107, 1002},
        {108, 1002},
        {109, 1002},
        {110, 1002},
        {111, 1002},
        {112, 1002},
        {113, 1002},
        {114, 1002},
        {115, 1002},
        {116, 1002},
        {117, 1002},
        {118, 1002},
        {119, 1002},
        {120, 1002},
        {121, 1002},
        {122, 1002},
        {123, 1002},
        {125, 1002}
    }},
    {4, { //= was recognized. (= or ==)
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 8},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {5, { //< recognized (< or <=)
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 9},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {6, { //> recognized (> or >=)
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 10},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {7, { //generic opordel recognized
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 1003},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {8, { //==
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 1003},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {9, { //<=
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 1003},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {10, { //>=
        { -1, 1003},
        {  9, 1003},
        { 10, 1003},
        { 11, 1003},
        { 13, 1003},
        { 32, 1003},
        { 35, 1003},
        { 37, 1003},
        { 40, 1003},
        { 41, 1003},
        { 42, 1003},
        { 43, 1003},
        { 44, 1003},
        { 45, 1003},
        { 46, 1003},
        { 47, 1003},
        { 48, 1003},
        { 49, 1003},
        { 50, 1003},
        { 51, 1003},
        { 52, 1003},
        { 53, 1003},
        { 54, 1003},
        { 55, 1003},
        { 56, 1003},
        { 57, 1003},
        { 58, 1003},
        { 59, 1003},
        { 60, 1003},
        { 61, 1003},
        { 62, 1003},
        { 65, 1003},
        { 66, 1003},
        { 67, 1003},
        { 68, 1003},
        { 69, 1003},
        { 70, 1003},
        { 71, 1003},
        { 72, 1003},
        { 73, 1003},
        { 74, 1003},
        { 75, 1003},
        { 76, 1003},
        { 77, 1003},
        { 78, 1003},
        { 79, 1003},
        { 80, 1003},
        { 81, 1003},
        { 82, 1003},
        { 83, 1003},
        { 84, 1003},
        { 85, 1003},
        { 86, 1003},
        { 87, 1003},
        { 88, 1003},
        { 89, 1003},
        { 90, 1003},
        { 91, 1003},
        { 93, 1003},
        { 97, 1003},
        { 98, 1003},
        { 99, 1003},
        {100, 1003},
        {101, 1003},
        {102, 1003},
        {103, 1003},
        {104, 1003},
        {105, 1003},
        {106, 1003},
        {107, 1003},
        {108, 1003},
        {109, 1003},
        {110, 1003},
        {111, 1003},
        {112, 1003},
        {113, 1003},
        {114, 1003},
        {115, 1003},
        {116, 1003},
        {117, 1003},
        {118, 1003},
        {119, 1003},
        {120, 1003},
        {121, 1003},
        {122, 1003},
        {123, 1003},
        {125, 1003}
    }},
    {11, { //comment. Ignore all characters until next line
        { -1, 1005},
        {  9, 11},
        { 10,  1},
        { 11, 11},
        { 13, 11},
        { 32, 11},
        { 35, 11},
        { 37, 11},
        { 40, 11},
        { 41, 11},
        { 42, 11},
        { 43, 11},
        { 44, 11},
        { 45, 11},
        { 46, 11},
        { 47, 11},
        { 48, 11},
        { 49, 11},
        { 50, 11},
        { 51, 11},
        { 52, 11},
        { 53, 11},
        { 54, 11},
        { 55, 11},
        { 56, 11},
        { 57, 11},
        { 58, 11},
        { 59, 11},
        { 60, 11},
        { 61, 11},
        { 62, 11},
        { 65, 11},
        { 66, 11},
        { 67, 11},
        { 68, 11},
        { 69, 11},
        { 70, 11},
        { 71, 11},
        { 72, 11},
        { 73, 11},
        { 74, 11},
        { 75, 11},
        { 76, 11},
        { 77, 11},
        { 78, 11},
        { 79, 11},
        { 80, 11},
        { 81, 11},
        { 82, 11},
        { 83, 11},
        { 84, 11},
        { 85, 11},
        { 86, 11},
        { 87, 11},
        { 88, 11},
        { 89, 11},
        { 90, 11},
        { 91, 11},
        { 93, 11},
        { 97, 11},
        { 98, 11},
        { 99, 11},
        {100, 11},
        {101, 11},
        {102, 11},
        {103, 11},
        {104, 11},
        {105, 11},
        {106, 11},
        {107, 11},
        {108, 11},
        {109, 11},
        {110, 11},
        {111, 11},
        {112, 11},
        {113, 11},
        {114, 11},
        {115, 11},
        {116, 11},
        {117, 11},
        {118, 11},
        {119, 11},
        {120, 11},
        {121, 11},
        {122, 11},
        {123, 11},
        {125, 11}
    }}
};

#endif
