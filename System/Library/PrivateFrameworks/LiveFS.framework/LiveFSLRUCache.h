/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface LiveFSLRUCache : NSObject {

	int _countLimit;
	NSMutableDictionary* _mapping;
	NSMutableArray* _usageOrder;

}

@property (retain) NSMutableDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (retain) NSMutableArray * usageOrder;                //@synthesize usageOrder=_usageOrder - In the implementation block
@property (assign) int countLimit; 
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(int)countLimit;
-(void)setCountLimit:(int)arg1 ;
-(NSMutableDictionary *)mapping;
-(void)setMapping:(NSMutableDictionary *)arg1 ;
-(void)removeLastItem;
-(id)objectForKeyLocked:(id)arg1 ;
-(NSMutableArray *)usageOrder;
-(void)setUsageOrder:(NSMutableArray *)arg1 ;
@end
