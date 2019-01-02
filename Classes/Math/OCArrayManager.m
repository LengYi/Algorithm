//
//  OCArrayManager.m
//  Algorithm
//
//  Created by Ice on 2019/1/1.
//  Copyright © 2019年 Ice. All rights reserved.
//

#import "OCArrayManager.h"

@implementation OCArrayManager
// 时间复杂度 O(n)
+ (void)findRepeatData {
    NSArray *arr = @[@2,@3,@1,@0,@2,@5,@3];
   
    NSMutableDictionary *dict = [[NSMutableDictionary alloc] init];
    for (int i = 0; i < arr.count; i++) {
        NSNumber *value = arr[i];
        NSString *key = [NSString stringWithFormat:@"%d", [value intValue]];
        if (dict[key] == nil) {
            [dict setObject:@1 forKey:key];
        } else {
            NSNumber *count = dict[key];
            [dict setObject:@([count intValue] + 1) forKey:key];
        }
    }
    
    NSArray *keyArr = [dict allKeys];
    for (int i = 0; i < keyArr.count; i ++) {
        NSNumber *value = dict[keyArr[i]];
        NSLog(@"%@ 重复了 %d 次", keyArr[i], [value intValue]);
    }
}

@end
