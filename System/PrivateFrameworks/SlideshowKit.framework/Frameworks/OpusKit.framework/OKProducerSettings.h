/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject {

	NSArray* _guidelines;
	OKMediaFeeder* _mediaFeeder;
	NSArray* _audioURLs;
	OKProducerPreset* _preset;

}

@property (retain) OKProducerPreset * preset;                //@synthesize preset=_preset - In the implementation block
@property (retain) NSArray * guidelines;                     //@synthesize guidelines=_guidelines - In the implementation block
@property (retain) OKMediaFeeder * mediaFeeder;              //@synthesize mediaFeeder=_mediaFeeder - In the implementation block
@property (retain) NSArray * audioURLs; 
-(void)dealloc;
-(void)setPreset:(OKProducerPreset *)arg1 ;
-(OKProducerPreset *)preset;
-(NSArray *)audioURLs;
-(void)setAudioURLs:(NSArray *)arg1 ;
-(NSArray *)guidelines;
-(void)setGuidelines:(NSArray *)arg1 ;
-(void)setMediaFeeder:(OKMediaFeeder *)arg1 ;
-(OKMediaFeeder *)mediaFeeder;
@end

