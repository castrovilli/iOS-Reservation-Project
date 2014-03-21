//
//  BeaconAdvertisingService.h
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//  For advertising option


#import <Foundation/Foundation.h>

@import CoreLocation;

@interface BeaconAdvertisingService : NSObject

@property (nonatomic, readonly, getter = isAdvertising) BOOL advertising;

+ (BeaconAdvertisingService *)sharedInstance;

- (void)startAdvertisingUUID:(NSUUID *)uuid major:(CLBeaconMajorValue)major minor:(CLBeaconMinorValue)minor;
- (void)stopAdvertising;

@end
