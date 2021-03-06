/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
+(void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1 ;
+(void)fetchMigrationFlagWithCompletion:(/*^block*/id)arg1 ;
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)migrateFromManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveRecord:(id)arg1 error:(id*)arg2 ;
@end

