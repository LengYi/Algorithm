//
//  MathManager.c
//  Algorithm
//
//  Created by Ice on 2019/1/1.
//  Copyright © 2019年 Ice. All rights reserved.
//

#include "MathManager.h"

// 数组中重复的数字
/*
 * 在一个长度为n的数组里的所有数字都在0~n-1的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
 * 请找出数组中任意一个重复的数字。例如，如果输入长度为7的数组 {2,3,1,0,2,5,3},那么对应的输出是重复的数字2或者3。
 */

// 解法一 先排序再找出重复数字
// // 时间复杂度 O(nlogn)
void answer1() {
    int a[] = {0,1,2,2,3,3,5};
    int n = 7;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ",a[i]);
            }
        }
    }
}

bool answer2(int a[], int n, int *b) {
    for (int i = 0; i < n; i++) {
        while (a[i] != i) {
            if (a[i] == a[a[i]]) {
                *b = a[i];
                return true;
            }
            
            int temp = a[i];
            a[i] = a[temp];
            a[temp] = temp;
        }
    }
    
    return false;
}

// 奇数在左，偶数在右
void record(int a[], int n) {
    int begin = 0;
    int end = n - 1;
    
    while (begin < end) {
        while (a[begin] % 2 != 0 && begin < n) {
            begin++;
        }
        
        while (a[end] % 2 == 0 && begin < end) {
            end--;
        }
        
        if (begin < end) {
            int tmp = a[begin];
            a[begin] = a[end];
            a[end] = tmp;
        }
    }
}
