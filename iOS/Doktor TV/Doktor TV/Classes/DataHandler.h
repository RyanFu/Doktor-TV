//
//  DataHandler.h
//  Doktor TV
//
//  Created by Tobias DM on 16/11/13.
//  Copyright (c) 2013 developmunk. All rights reserved.
//

#import <Foundation/Foundation.h>


#import "Program.h"
#import "Season.h"
#import "Episode.h"

@interface DataHandler : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (DataHandler *)sharedInstance;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

- (NSArray *)programs;

- (Program *)newProgram;
- (Program *)newProgramAssociated:(BOOL)associated;
- (Season *)newSeason;
- (Episode *)newEpisode;

- (void)associateObject:(NSManagedObject *)managedObject;

+ (BOOL)fileExists:(NSString *)filename;
+ (NSString *)pathForTempFile:(NSString *)filename;
+ (NSString *)pathForCachedFile:(NSString *)filename;

- (void)cleanUpCachedLocalFiles;

@end
