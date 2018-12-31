//
//  SortManager.c
//  Algorithm
//
//  Created by Ice on 2018/12/31.
//  Copyright © 2018年 Ice. All rights reserved.
//

#include "SortManager.h"

// 冒泡排序
void maoPaoSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j ++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}

//
void  quickSort(int a[], int begin, int end) {
    if (begin > end) {
        return;
    }
    int i = begin;
    int j = end;
    int key = a[i];
    
    while(i != j) {
        while((a[j] >= key) && i < j) j--;
        while (a[i] <= key && i < j) i++;
        
        if (i < j) {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    
    a[begin] = a[i];
    a[i] = key;
    
    if (i - 1 > begin) {
        quickSort(a, begin, i - 1);
    }
    
    if (i + 1 < end) {
        quickSort(a, i + 1, end);
    }
}

void printArr(int a[], int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
}
