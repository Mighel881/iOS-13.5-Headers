/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPTextWrapper : NSObject
+(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(double)unobstructedSpanForPath:(id)arg1 startingSpan:(CGRect)arg2 columnBounds:(CGRect)arg3 ;
+(unsigned)p_wrappedSubrectsForRectOptimized:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(unsigned)p_wrappedSubrectsForRectGPC:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
@end
