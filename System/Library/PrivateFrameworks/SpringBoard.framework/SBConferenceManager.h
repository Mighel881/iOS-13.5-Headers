/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class TUCallCenter;

@interface SBConferenceManager : NSObject {

	BOOL _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;
	TUCallCenter* _sharedCallCenter;

}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)inFaceTime;
-(BOOL)faceTimeInvitationExists;
-(void)endFaceTime;
-(BOOL)activeFaceTimeCallExists;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(id)incomingFaceTimeCall;
-(id)activeFaceTimeCall;
-(id)currentFaceTimeCall;
-(BOOL)hasFaceTimeCapability;
-(BOOL)faceTimeIsAvailable;
-(BOOL)inFaceTimeVideo;
-(BOOL)canStartFaceTime;
@end
