/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVolumeControllerDelegate <NSObject>
@optional
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned)arg2;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2;

@end
