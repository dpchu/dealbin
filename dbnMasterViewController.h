//
//  dbnMasterViewController.h
//  Deal Bin
//
//  Created by david choung on 5/1/14.
//  Copyright (c) 2014 Guy Labs. All rights reserved.
//
#import <Parse/Parse.h>
#import <UIKit/UIKit.h>

@class dbnDetailViewController;

#import <CoreData/CoreData.h>

@interface dbnMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) dbnDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
