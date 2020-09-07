/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoInteractionHandlerFactory.h>

@protocol SVVideoPlaybackSkipping;
@class NSString;

@interface SVSkipToNextInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory> {

	id<SVVideoPlaybackSkipping> _playbackSkipper;

}

@property (nonatomic,readonly) id<SVVideoPlaybackSkipping> playbackSkipper;              //@synthesize playbackSkipper=_playbackSkipper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInteractionHandlerForVideo:(id)arg1 ;
-(id<SVVideoPlaybackSkipping>)playbackSkipper;
-(id)initWithPlaybackSkipper:(id)arg1 ;
@end
