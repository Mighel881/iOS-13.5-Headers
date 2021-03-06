/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSUbiquitousKeyValueStore, NSDate;

@interface MSPSharedTripBlacklist : NSObject {

	NSMutableSet* _blockIDs;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSUbiquitousKeyValueStore* _kvStore;
	NSDate* _lastUpdateDate;

}
-(id)init;
-(id)description;
-(BOOL)containsIdentifier:(id)arg1 ;
-(void)_storeIdentifiers;
-(void)blockIdentifier:(id)arg1 ;
-(void)_loadIdentifiers;
-(void)updateBlockedListFromStore:(id)arg1 ;
-(BOOL)containsAnyIdentifiersInArray:(id)arg1 ;
-(void)unblockIdentifiers:(id)arg1 ;
-(void)clearList;
@end

