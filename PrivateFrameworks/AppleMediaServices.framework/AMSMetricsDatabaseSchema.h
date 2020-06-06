/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AMSMetricsDatabaseSchema : NSObject
+(id)databasePathForContainerId:(id)arg1 ;
+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg1 ;
+(BOOL)removeDatabaseForContainerId:(id)arg1 ;
+(void)migrateVersion0to1WithMigration:(id)arg1 ;
+(void)migrateVersion1to2WithMigration:(id)arg1 ;
+(id)_containerURLForContainerId:(id)arg1 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
@end
