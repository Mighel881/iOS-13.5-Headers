/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVVCStartRecordSettings : NSObject {

	BOOL _skipAlert;
	unsigned long long _streamID;
	unsigned long long _startHostTime;
	long long _startAlert;
	long long _stopAlert;
	long long _stopOnErrorAlert;

}

@property (assign,nonatomic) unsigned long long streamID;                   //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) unsigned long long startHostTime;              //@synthesize startHostTime=_startHostTime - In the implementation block
@property (assign,nonatomic) long long startAlert;                          //@synthesize startAlert=_startAlert - In the implementation block
@property (assign,nonatomic) long long stopAlert;                           //@synthesize stopAlert=_stopAlert - In the implementation block
@property (assign,nonatomic) long long stopOnErrorAlert;                    //@synthesize stopOnErrorAlert=_stopOnErrorAlert - In the implementation block
@property (assign,nonatomic) BOOL skipAlert;                                //@synthesize skipAlert=_skipAlert - In the implementation block
-(unsigned long long)streamID;
-(void)setStreamID:(unsigned long long)arg1 ;
-(long long)stopOnErrorAlert;
-(long long)stopAlert;
-(long long)startAlert;
-(BOOL)skipAlert;
-(unsigned long long)startHostTime;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
-(id)initWithStreamID:(unsigned long long)arg1 atStartHostTime:(unsigned long long)arg2 ;
-(void)setStartHostTime:(unsigned long long)arg1 ;
-(void)setSkipAlert:(BOOL)arg1 ;
@end
