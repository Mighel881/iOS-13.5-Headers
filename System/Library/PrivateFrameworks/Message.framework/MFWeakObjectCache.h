/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MFWeakObjectCache : NSObject {

	/*^block*/id _block;
	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 wasCached:(BOOL*)arg2 ;
-(id)objectForKey:(id)arg1 shouldGenerate:(BOOL)arg2 wasCached:(BOOL*)arg3 ;
-(id)weakObjectCacheRefForKey:(id)arg1 ;
@end
