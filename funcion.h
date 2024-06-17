#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

map<string, vector<string>> data_base;

bool date_valid(const string& date, string& formato_de_dato);
void add(const string& date, const string& event);
void delete_specific(const string& date, const string& event);
void delete_all(const string& date);
void find(const string& date);
void print();
void show_menu();

