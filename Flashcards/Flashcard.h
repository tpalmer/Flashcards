//
//  Flashcard.h
//  Flashcards
//
//  Created by Travis Palmer on 2/22/14.
//  Copyright (c) 2014 dorkHouse. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Flashcard : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * question;

@end
