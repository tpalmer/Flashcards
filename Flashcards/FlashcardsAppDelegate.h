//
//  FlashcardsAppDelegate.h
//  Flashcards
//
//  Created by Travis Palmer on 2/22/14.
//  Copyright (c) 2014 dorkHouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlashcardsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
