//
//  TestManager.m
//  Algorithm
//
//  Created by Ice on 2018/12/31.
//  Copyright © 2018年 Ice. All rights reserved.
//

#import "TestManager.h"
#include "SortManager.h"

@implementation TestManager

+ (void)test {
    [TestManager maoPao];
    [TestManager qucik];
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
@end
