/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIView;

@interface UICellViewAccessory : UICellAccessory {

	long long _options;

}

@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) UIView * view; 
+(id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)requestsHuggingLayoutWidth;
-(BOOL)alwaysNeedsLayout;
@end
