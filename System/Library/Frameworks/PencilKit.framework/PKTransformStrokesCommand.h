/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKTransformStrokesCommand : PKUndoCommand {

	NSArray* _strokes;
	CGAffineTransform _strokeTransform;

}

@property (nonatomic,readonly) NSArray * strokes;                              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) CGAffineTransform strokeTransform;              //@synthesize strokeTransform=_strokeTransform - In the implementation block
+(id)commandForTransforming:(id)arg1 drawing:(id)arg2 strokeTransform:(CGAffineTransform)arg3 ;
-(id)description;
-(NSArray *)strokes;
-(void)applyToDrawing:(id)arg1 ;
-(CGAffineTransform)strokeTransform;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransform:(CGAffineTransform)arg4 ;
@end

