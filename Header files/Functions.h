#pragma once  // To make sure that this header file called once in each file you calling in it.
#include <bits/stdc++.h>
using namespace std;
bool check_sizeof_specialization(vector<deque<pair<string, string>>>v, short specialization);
bool check_number_of_patients_in_all_specializations(vector<deque<pair<string, string>>>v);
void push_patients(vector<deque<pair<string, string>>>& v, bool  status, short specialization, string name);
void print_patients(vector<deque<pair<string, string>>>v);
void Get_next_patient(vector<deque<pair<string, string>>>& v, short specialization);
void Hospital_System();
