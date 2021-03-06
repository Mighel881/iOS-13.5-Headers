/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HDDatabaseSchemaProvider
@property (nonatomic,copy,readonly) NSString * schemaName; 
@required
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1;
-(id)databaseEntitiesForProtectionClass:(long long)arg1;
-(NSString *)schemaName;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;

@end

