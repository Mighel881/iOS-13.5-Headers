/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKTiledViewDelegate
@required
-(void)canvasViewDidBeginDrawing:(id)arg1;
-(void)canvasViewDidEndDrawing:(id)arg1;
-(void)_canvasViewWillBeginDrawing:(id)arg1;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
-(void)canvasViewDidEraseStrokes:(id)arg1;
-(BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;

@end

