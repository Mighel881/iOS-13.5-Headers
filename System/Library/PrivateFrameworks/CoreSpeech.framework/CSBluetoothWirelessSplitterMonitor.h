/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveWirelessSplitterStateChange;
-(void)_notifyObserver:(id)arg1 splitterState:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg3 ;
-(void)splitterState:(/*^block*/id)arg1 ;
@end

