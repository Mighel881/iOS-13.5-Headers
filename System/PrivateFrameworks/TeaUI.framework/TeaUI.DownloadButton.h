/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <TeaUI/TeaUI.TouchInsetsButton.h>

@interface TeaUI.DownloadButton : TeaUI.TouchInsetsButton {

	 handler;
	 delegate;
	 dataProvider;
	 imageTintColor;
	 progressTintColor;
	 trackTintColor;
	 downloadingImage;
	 notDownloadingImage;
	 progressBackgroundLayer;
	 progressLayer;
	 buttonState;
	 downloadProgressDisposable;
	 downloadStateDisposable;

}
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityActivate;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)startingButtonTappedWithSender:(id)arg1 ;
@end

