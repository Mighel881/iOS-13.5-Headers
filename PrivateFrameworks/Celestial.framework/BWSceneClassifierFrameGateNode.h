/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSceneClassifierFrameGateNode : BWNode {

	BOOL _discardsBlurryFrames;
	int _maxFrameRate;
	SCD_Struct_BW2 _lastEmittedPTS;
	int _inputFrameCount;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMaxOutputFrameRate:(int)arg1 ;
-(void)setDiscardsBlurryFrames:(BOOL)arg1 ;
-(BOOL)discardsBlurryFrames;
@end
