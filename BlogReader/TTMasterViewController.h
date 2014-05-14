//
//  TTMasterViewController.h
//  BlogReader
//
//  Created by Matthew Duff on 5/13/14.
//  Copyright (c) 2014 Tiniest Time. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface TTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
