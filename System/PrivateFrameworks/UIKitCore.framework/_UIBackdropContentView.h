/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIBackdropContentView : UIView {

	BOOL _isForcingLayout;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2 ;
-(void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
@end

