/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSMapTable, NSObject;

@interface WBSCache : NSObject {

	NSCache* _cache;
	NSMapTable* _weakObjectsTable;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_recacheObjectForKey:(id)arg1 ;
@end
