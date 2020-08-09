/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTEditingModelColors.h>

@class NSMutableDictionary;

@interface AVTMutableEditingModelColors : AVTEditingModelColors {

	NSMutableDictionary* _mutableStorage;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableStorage;              //@synthesize mutableStorage=_mutableStorage - In the implementation block
-(id)initWithStorage:(id)arg1 variationStore:(id)arg2 ;
-(void)setColor:(id)arg1 forSettingKind:(SCD_Struct_AV4)arg2 identifier:(id)arg3 ;
-(id)initWithVariationStore:(id)arg1 ;
-(NSMutableDictionary *)mutableStorage;
@end
