/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class Protocol, NSHashTable, NSObject;

@interface GEOObserverHashTable : NSObject {

	Protocol* _protocol;
	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) BOOL hasObservers; 
-(id)init;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)hasObservers;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 queue:(id)arg2 ;
@end

