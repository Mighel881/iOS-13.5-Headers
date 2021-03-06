/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol MPMovieViewDelegate;
@interface MPMovieView : UIView {

	id<MPMovieViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPMovieViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MPMovieViewDelegate>)delegate;
-(void)setDelegate:(id<MPMovieViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

