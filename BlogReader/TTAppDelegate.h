//
//  TTAppDelegate.h
//  BlogReader
//
//  Created by Matthew Duff on 5/13/14.
//  Copyright (c) 2014 Tiniest Time. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
