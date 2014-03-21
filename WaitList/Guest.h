//
//  Guest.h
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Guest : NSObject <NSCoding>

@property (strong, nonatomic) NSString *name;
@property (nonatomic) NSInteger partySize;
@property (strong, nonatomic) NSDate *arrivalTime;
@property (strong, nonatomic) NSNumber *quotedTime;
@property (nonatomic) NSInteger mood;
@property (strong, nonatomic) NSString *notes;

@end
