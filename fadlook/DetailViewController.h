//
//  DetailViewController.h
//  fadlook
//
//  Created by Stanoo Chang on 13/2/1.
//  Copyright (c) 2013年 Stanoo Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
