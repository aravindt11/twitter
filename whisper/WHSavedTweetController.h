//
//  MasterViewController.h
//  whisper
//
//  Created by Aravind Thiyagarajan on 11/16/14.
//  Copyright (c) 2014 Whistlester LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface WHSavedTweetController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

