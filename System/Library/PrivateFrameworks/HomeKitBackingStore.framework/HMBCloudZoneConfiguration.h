/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMBCloudZoneConfiguration : HMFObject {

	BOOL _shouldRebuildOnManateeKeyLoss;
	BOOL _shouldSuppressDelegateCallbacksOnInitialFetch;

}

@property (assign) BOOL shouldRebuildOnManateeKeyLoss;                              //@synthesize shouldRebuildOnManateeKeyLoss=_shouldRebuildOnManateeKeyLoss - In the implementation block
@property (assign) BOOL shouldSuppressDelegateCallbacksOnInitialFetch;              //@synthesize shouldSuppressDelegateCallbacksOnInitialFetch=_shouldSuppressDelegateCallbacksOnInitialFetch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(BOOL)shouldRebuildOnManateeKeyLoss;
-(BOOL)shouldSuppressDelegateCallbacksOnInitialFetch;
-(void)setShouldRebuildOnManateeKeyLoss:(BOOL)arg1 ;
-(void)setShouldSuppressDelegateCallbacksOnInitialFetch:(BOOL)arg1 ;
@end
