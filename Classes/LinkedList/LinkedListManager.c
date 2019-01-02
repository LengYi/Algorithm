//
//  LinkedListManager.c
//  Algorithm
//
//  Created by Ice on 2019/1/1.
//  Copyright © 2019年 Ice. All rights reserved.
//

#include "LinkedListManager.h"
#include <stdlib.h>

// 创建单链表
struct NodeList *createNodeList(int n) {
    struct NodeList *header, *p1, *p2;
    header = NULL;
    p2 = header;
    
    for (int i = 0; i < n; i++) {
        p1 = (struct NodeList *)malloc(sizeof(struct NodeList));
        p1->data = 100 + i;
        p1->next = NULL;
        
        if (header == NULL) {
            header = p1;
            p2 = p1;
        } else {
            p2->next = p1;
            p2 = p1;
        }
    }
    return header;
}

struct NodeList *createNodeListWithArrData(int a[], int n) {
    struct NodeList *header, *p1, *p2;
    header = NULL;
    p2 = header;
    
    for (int i = 0; i < n; i++) {
        p1 = (struct NodeList *)malloc(sizeof(struct NodeList));
        p1->data = a[i];
        p1->next = NULL;
        
        if (header == NULL) {
            header = p1;
            p2 = p1;
        } else {
            p2->next = p1;
            p2 = p1;
        }
    }
    return header;
}

// 创建循环链表
struct NodeList *createDoubleList(int n) {
    struct NodeList *header, *p1, *p2;
    header = NULL;
    p2 = header;
    
    for (int i = 0; i < n; i++) {
        p1 = (struct NodeList *)malloc(sizeof(struct NodeList));
        p1->data = 200 + i;
        p1->next = NULL;
        
        if (header == NULL) {
            header = p1;
            p2 = p1;
        } else {
            p2->next = p1;
            p2 = p1;
        }
    }
    
    p2->next = header;
    return header;
}

// 创建双向链表
struct DulNode *createDulList(int n) {
    struct DulNode *header,*tail,*p1;
    header = NULL;
    tail = header;
    
    for (int i = 0; i < n; i++) {
        p1 = (struct DulNode *)malloc(sizeof(struct DulNode));
        p1->data = 300 + i;
        p1->pri = NULL;
        p1->next = NULL;
        
        if (header == NULL) {
            header = p1;
            tail = p1;
        } else {
            p1->pri = tail;
            tail->next = p1;
            tail = p1;
        }
    }
    
    tail->next = NULL;
    return header;
}

// 反转单链表
struct NodeList *resverNodeList(struct NodeList *p) {
    struct NodeList *currentP, *pri, *tail;
    currentP = p;
    pri = NULL;
    tail = NULL;
    
    while (currentP != NULL) {
        struct NodeList *next = currentP->next;
        if (next == NULL) {
            tail = currentP;
        }
        
        currentP->next = pri;
        pri = currentP;
        currentP = next;
    }
    
    return tail;
}

// 合并两个排序链表
struct NodeList *comtactNodeList(struct NodeList *header1, struct NodeList *header2) {
    if (header1 == NULL) {
        return header2;
    } else if (header2 == NULL) {
        return header1;
    }
    
    struct NodeList *p3 = NULL;
    
    if (header1->data < header2->data) {
        p3 = header1;
        p3->next = comtactNodeList(header1->next, header2);
    } else {
        p3 = header2;
        p3->next = comtactNodeList(header1, header2->next);
    }
    return p3;
}
