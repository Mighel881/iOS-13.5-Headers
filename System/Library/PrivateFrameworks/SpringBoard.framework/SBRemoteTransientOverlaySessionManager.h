/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBRemoteTransientOverlaySessionHostDelegate.h>

@protocol OS_dispatch_queue, SBRemoteTransientOverlaySessionManagerDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface SBRemoteTransientOverlaySessionManager : NSObject <SBRemoteTransientOverlaySessionHostDelegate> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSMutableDictionary* _sessionIDToSession;
	id<SBRemoteTransientOverlaySessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBRemoteTransientOverlaySessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBRemoteTransientOverlaySessionManagerDelegate>)delegate;
-(void)setDelegate:(id<SBRemoteTransientOverlaySessionManagerDelegate>)arg1 ;
-(BOOL)hasSessionWithPendingButtonEvents:(unsigned long long)arg1 options:(long long)arg2 ;
-(id)_createSessionWithDefinition:(id)arg1 ;
-(id)_existingSessionsWithDefinition:(id)arg1 options:(long long)arg2 ;
-(long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1 ;
-(void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2 ;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3 ;
-(id)createSessionWithDefinition:(id)arg1 ;
-(id)existingSessionsWithDefinition:(id)arg1 options:(long long)arg2 ;
-(id)existingSessionWithSessionID:(id)arg1 options:(long long)arg2 ;
-(BOOL)hasSessionWithServiceProcessIdentifier:(int)arg1 options:(long long)arg2 ;
-(id)sessionWithDefinition:(id)arg1 options:(long long)arg2 ;
-(id)sessionsWithDefinition:(id)arg1 options:(long long)arg2 ;
@end

