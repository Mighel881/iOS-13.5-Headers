/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject {

	_OSLogCollectionReference* _lcr;
	BOOL _closeOnRelease;
	BOOL _hasEndTimeRef;
	long long _state;
	long long _version;

}

@property (nonatomic,readonly) long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasEndTimeRef;              //@synthesize hasEndTimeRef=_hasEndTimeRef - In the implementation block
@property (nonatomic,readonly) long long version;               //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(long long)version;
-(long long)state;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)performDestructiveUpdates:(id*)arg1 ;
-(id)initWithCollection:(id)arg1 error:(id*)arg2 ;
-(id)initWithCollection:(id)arg1 closeOnRelease:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)checkTimesyncDB:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)repairTimesyncDB:(id*)arg1 ;
-(BOOL)hasEndTimeRef;
@end
