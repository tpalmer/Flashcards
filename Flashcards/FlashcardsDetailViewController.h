//
//  FlashcardsDetailViewController.h
//  Flashcards
//
//  Created by Travis Palmer on 2/22/14.
//  Copyright (c) 2014 dorkHouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlashcardsDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
