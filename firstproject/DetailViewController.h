//
//  DetailViewController.h
//  firstproject
//
//  Created by Sean Mitchell on 06/02/2013.
//  Copyright (c) 2013 Sean Mitchell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
