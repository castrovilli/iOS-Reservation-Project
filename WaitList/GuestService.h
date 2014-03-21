//
//  GuestService.h
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Guest.h"

@interface GuestService : NSObject

@property (strong, nonatomic, readonly) NSDateFormatter *arrivalDateFormatter;

+ (GuestService *)sharedInstance;
- (void)writeGuestsToDisk;
- (NSArray *)guests;
- (NSInteger)addGuest:(Guest *)guest;
- (void)removeGuest:(Guest *)guest;

@end
