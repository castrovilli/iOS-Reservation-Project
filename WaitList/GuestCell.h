//
//  GuestCell.h
//  WaitList
//
//  Created by Developer on 3/6/14.
//  Copyright (c) 2014 AST. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Guest;

@interface GuestCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *numberLabel;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *partySizeLabel;
@property (weak, nonatomic) IBOutlet UILabel *arrivalTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *quotedTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *timeTilQuoteLabel;
@property (weak, nonatomic) IBOutlet UIImageView *moodImageView;
@property (nonatomic) BOOL evenRow;

@property (strong, nonatomic) Guest *guest;

@end
