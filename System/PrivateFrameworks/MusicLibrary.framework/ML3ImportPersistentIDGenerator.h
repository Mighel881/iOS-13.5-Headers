/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {

	NSMutableDictionary* _pregeneratedIdMappings;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(void)addIdMapping:(id)arg1 forProperty:(unsigned)arg2 ;
-(long long)nextPersistentIDForImportItem:(shared_ptr<ML3ImportItem>*)arg1 ;
-(void)removePersistentIDFromIdMapping:(long long)arg1 ;
@end
