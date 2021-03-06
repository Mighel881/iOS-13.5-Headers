/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {

	BWRingBuffer* _ringBuffer;
	double _maxDuration;
	int _maxCount;

}
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW50*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(double)duration;
-(id)initWithMaxDuration:(double)arg1 ;
-(void)addMotionDataToRingBuffer:(SCD_Struct_BW74*)arg1 withSampleCount:(int)arg2 ;
-(SCD_Struct_BW74*)lastSample;
@end

