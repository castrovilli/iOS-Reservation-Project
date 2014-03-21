//
//  AddGuestTableViewController.h
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Guest;

@protocol AddGuestDelegate <NSObject>

- (void)guestAdded:(Guest *)guest atIndex:(NSInteger)index;

@end

@interface AddGuestTableViewController : UITableViewController

@property (weak, nonatomic) id<AddGuestDelegate> delegate;
@property (strong, nonatomic) Guest *guest;

@end
