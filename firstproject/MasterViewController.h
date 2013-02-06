//
//  MasterViewController.h
//  firstproject
//
//  Created by Sean Mitchell on 06/02/2013.
//  Copyright (c) 2013 Sean Mitchell. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
