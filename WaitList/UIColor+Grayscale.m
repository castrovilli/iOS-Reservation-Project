//
//  UIColor+Grayscale.m
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//

#import "UIColor+Grayscale.h"

@implementation UIColor (Grayscale)

- (UIColor *)grayscale {
    CGFloat red = 0;
    CGFloat blue = 0;
    CGFloat green = 0;
    CGFloat alpha = 0;
    if ([self getRed:&red green:&green blue:&blue alpha:&alpha]) {
        return [UIColor colorWithWhite:(0.299*red + 0.587*green + 0.114*blue) alpha:alpha];
    } else {
        return self;
    }
}

@end
