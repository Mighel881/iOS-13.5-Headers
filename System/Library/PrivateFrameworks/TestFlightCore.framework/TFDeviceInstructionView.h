/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface TFDeviceInstructionView : UIView {

	UIImageView* _deviceImageView;

}

@property (nonatomic,readonly) UIImageView * deviceImageView;              //@synthesize deviceImageView=_deviceImageView - In the implementation block
+(id)backgroundColor;
+(double)cornerRadius;
+(UIEdgeInsets)imageLayoutInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)displayDeviceImage:(id)arg1 inOrientation:(long long)arg2 ;
-(UIImageView *)deviceImageView;
-(void)updateCurrentDeviceImageToOrientation:(long long)arg1 ;
@end

