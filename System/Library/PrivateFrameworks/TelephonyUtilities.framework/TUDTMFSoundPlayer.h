/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUDTMFSoundPlayer : NSObject {

	/*^block*/id _playSystemSoundHandler;

}

@property (nonatomic,copy) id playSystemSoundHandler;              //@synthesize playSystemSoundHandler=_playSystemSoundHandler - In the implementation block
-(id)init;
-(void)attemptToPlaySoundType:(long long)arg1 ;
-(id)playSystemSoundHandler;
-(BOOL)attemptToPlayKey:(unsigned char)arg1 ;
-(void)setPlaySystemSoundHandler:(id)arg1 ;
@end

