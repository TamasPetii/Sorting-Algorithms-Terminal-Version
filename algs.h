#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h> 
#include <sstream>
#include <string>

void swap(int& x, int& y);
void print(std::vector<int> array, int from, int to, int ind, int sw);
void read(std::vector<int>& list);

void BubbleSort(std::vector<int> array);
void BubbleSortPlus(std::vector<int> array);
void MaxSelectionSort(std::vector<int> array);
void MinSelectionSort(std::vector<int> array);
void NaiveInsertionSort(std::vector<int> array);
void InsertionSort(std::vector<int> array);
void MergeSort(std::vector<int> array);
void ms(std::vector<int>& array, int u, int v);
void merge(std::vector<int>& array, int u, int m, int v);
void QuickSort(std::vector<int> array, int sw);
void QuickSort(std::vector<int>& array, int p, int r, int sw);
int  partition(std::vector<int>& array, int p, int r, int sw);