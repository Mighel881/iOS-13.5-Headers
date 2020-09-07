/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO {

	CHDrawing* _strokes;
	CHDrawing* _drawing;

}

@property (nonatomic,retain) CHDrawing * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,retain) CHDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(void)setStrokes:(CHDrawing *)arg1 ;
-(CHDrawing *)strokes;
-(CHDrawing *)drawing;
-(void)setDrawing:(CHDrawing *)arg1 ;
@end
