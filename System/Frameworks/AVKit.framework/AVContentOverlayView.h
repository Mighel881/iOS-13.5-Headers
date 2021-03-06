/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVTouchIgnoringView.h>

@protocol AVContentOverlayViewDelegate;
@interface AVContentOverlayView : AVTouchIgnoringView {

	id<AVContentOverlayViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVContentOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AVContentOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<AVContentOverlayViewDelegate>)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
@end

