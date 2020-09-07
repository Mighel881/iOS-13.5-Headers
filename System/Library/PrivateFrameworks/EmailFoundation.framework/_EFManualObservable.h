/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFObservable.h>
#import <libobjc.A.dylib/EFObserver.h>

@class NSMutableArray, NSError, NSString;

@interface _EFManualObservable : EFObservable <EFObserver> {

	NSMutableArray* _observers;
	NSError* _failureError;
	os_unfair_lock_s _lock;
	BOOL _didCompleteOrFail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_removeObserver:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(BOOL)_addObserver:(id)arg1 failureError:(id*)arg2 ;
@end
