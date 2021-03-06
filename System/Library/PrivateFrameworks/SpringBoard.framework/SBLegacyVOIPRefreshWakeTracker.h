/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBApplicationWakeLifecycleHandling.h>

@class FBProcessManager, BKSProcessAssertion, NSString;

@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling> {

	FBProcessManager* _processManager;
	BKSProcessAssertion* _appKeepAliveAssertion;

}

@property (nonatomic,retain) BKSProcessAssertion * appKeepAliveAssertion;              //@synthesize appKeepAliveAssertion=_appKeepAliveAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(double)wakeDuration;
-(id)initWithProcessManager:(id)arg1 ;
-(void)setAppKeepAliveAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_activateAppIfNeeded:(id)arg1 ;
-(id)_createAssertionForBundleID:(id)arg1 ;
-(BKSProcessAssertion *)appKeepAliveAssertion;
-(BOOL)beginWakeForApplication:(id)arg1 ;
-(void)endWake;
@end

