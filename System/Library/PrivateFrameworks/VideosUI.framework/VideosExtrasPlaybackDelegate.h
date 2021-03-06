/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideosExtrasPlaybackDelegate <NSObject>
@optional
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)extrasBackButtonPressed;

@required
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
-(void)extrasRequestReloadWithContext:(id)arg1;
-(void)extrasRequestsPlaybackStop;

@end

