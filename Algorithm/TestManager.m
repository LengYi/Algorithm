//
//  TestManager.m
//  Algorithm
//
//  Created by Ice on 2018/12/31.
//  Copyright © 2018年 Ice. All rights reserved.
//

#import "TestManager.h"
#include "SortManager.h"
#include "MathManager.h"
#import "OCArrayManager.h"
#include "LinkedListManager.h"

@implementation TestManager

+ (void)test {
   // [TestManager maoPao];
   // [TestManager qucik];
    [TestManager answer];
    [TestManager record];
    
    [TestManager nodeList];
    testp();
}

+ (void)maoPao {
    int a[] = {9,5,7,2,100,40,1};
    maoPaoSort(a, 7);
    
    printArr(a, 7);
}

+ (void)qucik {
    int a[] = {90,1,20,80,2,4,7,3};
    quickSort(a, 0, 7);
    printArr(a, 7);
}


+ (void)answer {
    printf("\n 找出数组重复数字: {2,3,1,0,2,5,3}");
    printf("\n 解法一 先排序再遍历: \n");
    answer1();
    
    printf("\n 解法二 使用OC字典哈希表: \n");
    [OCArrayManager findRepeatData];
    
    printf("\n 解法三 使用数组下标: \n");
    int a[] = {2,3,1,0,2,5,3};
    int b[] = {};
    answer2(a,7,b);
    printf("%d", *b);
}

+ (void)record {
    int a[] = {1,2,3,4,5,6,7,8,9};
    record(a, 9);
    printArr(a, 9);
}

+ (void)nodeList {
    printf("\n 创建单链表: \n");
    struct NodeList *q = createNodeList(6);
    
    while (q != NULL) {
        printf("%d ", q->data);
        q = q->next;
    }
    
    printf("\n 创建循环链表: \n");
    q = createDoubleList(6);
    int n = 0;
    while (q != NULL && n < 6 * 3) {
        printf("%d ", q->data);
        q = q->next;
        n++;
    }
    
    printf("\n 创建双向链表:");
    printf("\n 从表头开始打印: \n");
    
    struct DulNode *s = createDulList(6);
    struct DulNode *tail = NULL;
    while (s != NULL) {
        printf("%d ", s->data);
        tail = s;
        s = s->next;
    }
    
    printf("\n 从表尾开始打印: \n");
    
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->pri;
    }
}

int get_max(int i,int j) {
    return i > j ? i :j;
}

void testp() {
    int (*p)(int,int);
    p = get_max;
    int s = p(10,8);
    printf("\n 函数指针使用演示 %d ", s);
    
    printf("\n 反转单链表 \n ");
    
    struct NodeList *ss = createNodeList(6);
    struct NodeList *cur = ss;
    while (ss != NULL) {
        printf("%d ", ss->data);
        ss = ss->next;
    }
    
    printf("\n");
    struct NodeList *q = resverNodeList(cur);
    
    while (q != NULL) {
        printf("%d ", q->data);
        q = q->next;
    }
    
    printf("\n 合并有序链表 \n ");
    int a[] = {1,3,5,7};
    int b[] = {2,4,6,8};
    struct NodeList *header1 = createNodeListWithArrData(a,4);
    struct NodeList *header2 = createNodeListWithArrData(b,4);
    struct NodeList *list = comtactNodeList(header1, header2);
    
    while (list != NULL) {
        printf("%d ", list->data);
        list = list->next;
    }
}

@end
