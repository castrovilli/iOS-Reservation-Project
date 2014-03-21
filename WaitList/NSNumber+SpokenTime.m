//
//  NSNumber+SpokenTime.m
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//

#import "NSNumber+SpokenTime.h"

@implementation NSNumber (SpokenTime)

- (NSString *)spokenTime {
    if ([self floatValue] / 60.0 < 1) {
        return [NSString stringWithFormat:@"%@ minutes", self];
    } else if ([self floatValue] / 60.0 < 2){
        return [NSString stringWithFormat:@"1 hour %d minutes", [self intValue] % 60];
    } else {
        return @"2 hours";
    }
}

@end
