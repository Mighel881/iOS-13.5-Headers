/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol CAMMetalViewDelegate;
@class CAMetalLayer;

@interface CAMMetalView : UIView {

	id<CAMMetalViewDelegate> _metalViewDelegate;

}

@property (nonatomic,retain) id<CAMMetalViewDelegate> metalViewDelegate;              //@synthesize metalViewDelegate=_metalViewDelegate - In the implementation block
@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
+(Class)layerClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CAMetalLayer *)metalLayer;
-(id<CAMMetalViewDelegate>)metalViewDelegate;
-(void)setMetalViewDelegate:(id<CAMMetalViewDelegate>)arg1 ;
@end

