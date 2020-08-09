/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface TPBottomBar : UIView {

	long long _orientation;
	long long _style;

}
+(double)defaultHeight;
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2 ;
+(long long)fullscreenStyle;
+(long long)overlayStyle;
-(id)init;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end
