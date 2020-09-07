/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableOrderedSet, UIView;

@interface _UIMorphingView : UIView {

	BOOL _useOpacityPairFilter;
	double _progress;
	NSMutableOrderedSet* _contentViews;
	UIView* _opacityPairSourceView;
	CGRect _initialBounds;

}

@property (nonatomic,retain) NSMutableOrderedSet * contentViews;                 //@synthesize contentViews=_contentViews - In the implementation block
@property (assign,nonatomic) CGRect initialBounds;                               //@synthesize initialBounds=_initialBounds - In the implementation block
@property (assign,nonatomic,__weak) UIView * opacityPairSourceView;              //@synthesize opacityPairSourceView=_opacityPairSourceView - In the implementation block
@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL useOpacityPairFilter;                          //@synthesize useOpacityPairFilter=_useOpacityPairFilter - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setUseOpacityPairFilter:(BOOL)arg1 ;
-(void)addContentView:(id)arg1 ;
-(NSMutableOrderedSet *)contentViews;
-(void)setContentViews:(NSMutableOrderedSet *)arg1 ;
-(void)setInitialBounds:(CGRect)arg1 ;
-(BOOL)useOpacityPairFilter;
-(UIView *)opacityPairSourceView;
-(void)setOpacityPairSourceView:(UIView *)arg1 ;
-(void)_updateMorphProgress;
-(id)_currentDestinationView;
-(CGRect)initialBounds;
@end
