/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIInstrumentClusterSceneSettings.h>

@protocol CRSUIInstrumentClusterSceneSettings <NSObject>
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) unsigned long long showsCompass; 
@property (nonatomic,readonly) unsigned long long showsSpeedLimit; 
@required
-(unsigned long long)itemType;
-(unsigned long long)showsCompass;
-(unsigned long long)showsSpeedLimit;

@end


@class NSString;

@interface CRSUIInstrumentClusterSceneSettings : UIApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) unsigned long long showsCompass; 
@property (nonatomic,readonly) unsigned long long showsSpeedLimit; 
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)itemType;
-(unsigned long long)showsCompass;
-(unsigned long long)showsSpeedLimit;
@end
