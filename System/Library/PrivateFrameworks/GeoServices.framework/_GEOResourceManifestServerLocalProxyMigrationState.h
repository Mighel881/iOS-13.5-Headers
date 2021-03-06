/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, NSArray;

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {

	NSString* _loadingTileGroupUniqueIdentifier;
	NSArray* _pendingTileGroupMigrationTasks;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) NSString * loadingTileGroupUniqueIdentifier;              //@synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * pendingTileGroupMigrationTasks;                     //@synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks - In the implementation block
-(id)init;
-(id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2 ;
-(NSString *)loadingTileGroupUniqueIdentifier;
-(NSArray *)pendingTileGroupMigrationTasks;
-(void)setPendingTileGroupMigrationTasks:(NSArray *)arg1 ;
@end

