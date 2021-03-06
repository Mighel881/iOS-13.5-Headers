/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HealthUI/HealthUI-Structs.h>
@class NSObject;

@interface HKCoreTelephonyUtilities : NSObject {

	CTServerConnectionRef _ctServerConnection;
	NSObject*<OS_dispatch_queue> _ctServerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ctServerQueue;              //@synthesize ctServerQueue=_ctServerQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(CTServerConnectionRef)ctServerConnection;
-(BOOL)isEmergencyServicePhoneNumber:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ctServerQueue;
-(void)setCtServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

