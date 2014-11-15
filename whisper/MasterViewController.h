//
//  MasterViewController.h
//  whisper
//
//  Created by Aravind Thiyagarajan on 11/15/14.
//  Copyright (c) 2014 Whistlester LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

