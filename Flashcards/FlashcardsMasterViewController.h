//
//  FlashcardsMasterViewController.h
//  Flashcards
//
//  Created by Travis Palmer on 2/22/14.
//  Copyright (c) 2014 dorkHouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlashcardsDetailViewController;

#import <CoreData/CoreData.h>

@interface FlashcardsMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) FlashcardsDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
