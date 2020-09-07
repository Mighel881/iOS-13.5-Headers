/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKRulerLayer;

@interface PKRulerView : UIView {

	BOOL _rulerHidden;
	PKRulerLayer* _rulerLayer;

}

@property (nonatomic,retain) PKRulerLayer * rulerLayer;              //@synthesize rulerLayer=_rulerLayer - In the implementation block
@property (assign,nonatomic) BOOL rulerHidden;                       //@synthesize rulerHidden=_rulerHidden - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PKRulerLayer *)rulerLayer;
-(void)setRulerLayer:(PKRulerLayer *)arg1 ;
-(BOOL)rulerHidden;
-(void)setRulerHidden:(BOOL)arg1 ;
@end
