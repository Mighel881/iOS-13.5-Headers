/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UILabel.h>

@interface HKSelectedRangeLabel : UILabel {

	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;              //@synthesize padding=_padding - In the implementation block
+(void)clearCaches;
+(id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefersImageAffixes:(BOOL)arg4 ;
+(id)_prefixColorForSelectedRangeData:(id)arg1 defaultColor:(id)arg2 ;
+(id)_stringForSelectedRangeData:(id)arg1 ;
-(id)init;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)padding;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setSelectedRangeData:(id)arg1 ;
@end

