/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEventsTableBase.h>

@interface SSMetricsEventTable : SSEventsTableBase
+(id)databasePath;
+(id)_eventsTableName;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_setupDatabase;
-(id)_pragmaValueForName:(id)arg1 ;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
@end
