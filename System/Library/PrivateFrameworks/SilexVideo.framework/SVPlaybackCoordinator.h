/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVPlayerItemLoading;
@class SVPlayer;

@interface SVPlaybackCoordinator : NSObject {

	SVPlayer* _player;
	id<SVPlayerItemLoading> _playerItemLoader;

}

@property (nonatomic,readonly) SVPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemLoading> playerItemLoader;              //@synthesize playerItemLoader=_playerItemLoader - In the implementation block
-(void)load;
-(void)pause;
-(void)play;
-(SVPlayer *)player;
-(id<SVPlayerItemLoading>)playerItemLoader;
-(id)initWithPlayer:(id)arg1 playerItemLoader:(id)arg2 ;
-(void)loadVideoIfNeeded;
@end
