//
//  WHTwitterTableViewCell.h
//  whisper
//
//  Created by Aravind Thiyagarajan on 11/15/14.
//  Copyright (c) 2014 Whistlester LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WHTwitterTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *name;
@property (weak, nonatomic) IBOutlet UILabel *tweet;
@property (weak, nonatomic) IBOutlet UILabel *date;
@property (weak, nonatomic) IBOutlet UIImageView *profileImage;
@property (weak, nonatomic) IBOutlet UIButton *addButton;

@end
