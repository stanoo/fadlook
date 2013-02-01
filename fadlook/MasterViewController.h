//
//  MasterViewController.h
//  fadlook
//
//  Created by Stanoo Chang on 13/2/1.
//  Copyright (c) 2013年 Stanoo Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
