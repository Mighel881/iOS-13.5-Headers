/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVPBoundaryTimeObserverInfo : NSObject {

	NSArray* _times;
	/*^block*/id _handler;
	id _tokenFromAVPlayer;

}

@property (nonatomic,copy) NSArray * times;                     //@synthesize times=_times - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) id tokenFromAVPlayer;              //@synthesize tokenFromAVPlayer=_tokenFromAVPlayer - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setTimes:(NSArray *)arg1 ;
-(NSArray *)times;
-(id)tokenFromAVPlayer;
-(void)setTokenFromAVPlayer:(id)arg1 ;
@end

