//
//  FlashcardsMasterViewController.h
//  Flashcards
//
//  Created by Travis Palmer on 2/22/14.
//  Copyright (c) 2014 dorkHouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>


@class FlashcardsDetailViewController;

@interface FlashcardsMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) FlashcardsDetailViewController *detailViewController;
@property (strong, nonatomic) NSArray *flashcards;

- (void)refreshObjects;


@end
