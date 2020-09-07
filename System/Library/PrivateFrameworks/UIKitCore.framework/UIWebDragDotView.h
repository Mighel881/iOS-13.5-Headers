/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIWebDragDotView : UIView {

	UIColor* m_selectionBarColor;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}
-(void)dealloc;
-(BOOL)isVertical;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEdge:(CGRect)arg1 ;
-(BOOL)isPointedDown;
-(BOOL)isPointedUp;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
@end
