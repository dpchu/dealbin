//
//  dbnDetailViewController.h
//  Deal Bin
//
//  Created by david choung on 5/1/14.
//  Copyright (c) 2014 Guy Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface dbnDetailViewController : PFQueryTableViewController <UISplitViewControllerDelegate>

@property (nonatomic, retain) NSString *textSubKey;
@property (nonatomic, retain) NSString *textDateKey;
@property (nonatomic, retain) NSString *textLinkKey;
@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
