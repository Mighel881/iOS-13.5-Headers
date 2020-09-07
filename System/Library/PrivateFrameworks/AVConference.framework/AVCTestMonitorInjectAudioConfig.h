/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject {

	int _injectAudioConfigType;
	double _amplitude;
	NSString* _audioFileName;

}

@property (assign,nonatomic) int injectAudioConfigType;              //@synthesize injectAudioConfigType=_injectAudioConfigType - In the implementation block
@property (assign,nonatomic) double amplitude;                       //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) NSString * audioFileName;               //@synthesize audioFileName=_audioFileName - In the implementation block
-(void)setAudioFileName:(NSString *)arg1 ;
-(NSString *)audioFileName;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(int)injectAudioConfigType;
-(void)setInjectAudioConfigType:(int)arg1 ;
@end
