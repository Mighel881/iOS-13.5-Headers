/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider {

	HMAccessoryNetworkProtectionGroup* _group;
	NSMutableSet* _networkProtectionModeOptionItems;

}

@property (nonatomic,retain) NSMutableSet * networkProtectionModeOptionItems;               //@synthesize networkProtectionModeOptionItems=_networkProtectionModeOptionItems - In the implementation block
@property (nonatomic,copy,readonly) HMAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMAccessoryNetworkProtectionGroup *)group;
-(id)items;
-(id)initWithGroup:(id)arg1 ;
-(id)reloadItems;
-(NSMutableSet *)networkProtectionModeOptionItems;
-(void)setNetworkProtectionModeOptionItems:(NSMutableSet *)arg1 ;
@end
