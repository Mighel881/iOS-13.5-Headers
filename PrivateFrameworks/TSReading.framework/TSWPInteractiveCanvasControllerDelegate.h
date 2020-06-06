/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPInteractiveCanvasControllerDelegate <TSDInteractiveCanvasControllerDelegate>
@property (nonatomic,readonly) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction; 
@optional
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
-(void)showInsertPageNumberUIFromRect:(CGRect)arg1 inView:(id)arg2;
-(id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
-(BOOL)interactiveCanvasController:(id)arg1 allowsDragOfSmartField:(id)arg2;
-(BOOL)interactiveCanvasController:(id)arg1 configureHardPressGesture:(id)arg2;
-(BOOL)interactiveCanvasController:(id)arg1 tappedOnFootnoteAttachment:(id)arg2;
-(BOOL)interactiveCanvasControllerAllowsHyperlinkInteraction;

@end
