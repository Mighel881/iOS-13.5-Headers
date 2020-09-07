/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLAccessQueue, NSUUID, NSMutableSet;

@interface TKVibratorController : NSObject {

	TLAccessQueue* _accessQueue;
	NSUUID* _activePlayRequestIdentifier;
	NSMutableSet* _pendingStopRequestIdentifiers;

}

@property (nonatomic,readonly) unsigned long long vibratorState; 
-(id)init;
-(void)dealloc;
-(void)turnOff;
-(void)turnOnWithVibrationPattern:(id)arg1 ;
-(unsigned long long)vibratorState;
-(void)_turnOffIfAppropriate;
-(unsigned)_previewVibrationSystemSoundID;
-(void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1 ;
@end
