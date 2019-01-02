//
//  LinkedListManager.h
//  Algorithm
//
//  Created by Ice on 2019/1/1.
//  Copyright © 2019年 Ice. All rights reserved.
//

#ifndef LinkedListManager_h
#define LinkedListManager_h

#include <stdio.h>

struct NodeList {
    int data;
    struct NodeList *next;
};

struct DulNode {
    int data;
    struct DulNode *pri;
    struct DulNode *next;
};

struct NodeList *createNodeList(int n);

struct NodeList *createNodeListWithArrData(int a[], int n);

struct NodeList *createDoubleList(int n);

// 创建双向链表
struct DulNode *createDulList(int n);

// 反转单链表
struct NodeList *resverNodeList(struct NodeList *p);

// 合并两个排序链表
struct NodeList *comtactNodeList(struct NodeList *header1, struct NodeList *header2);

#endif /* LinkedListManager_h */
