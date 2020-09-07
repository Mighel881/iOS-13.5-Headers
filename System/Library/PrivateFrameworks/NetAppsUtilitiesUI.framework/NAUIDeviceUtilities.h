/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetAppsUtilitiesUI/NetAppsUtilitiesUI-Structs.h>
@interface NAUIDeviceUtilities : NSObject
+(id)operatingSystemName;
+(id)productVersion;
+(id)productBuildVersion;
+(id)productType;
+(id)productHardwareModel;
+(id)productHardwareModelName;
+(id)productClass;
+(int)deviceClass;
+(id)localizedProductName;
+(id)uniqueDeviceIdentifier;
+(BOOL)hasOrbCapability;
+(double)mainScreenScale;
+(BOOL)naui_shouldUseLargeiPadLayout;
+(BOOL)naui_shouldUseLargeiPadLayoutForSize:(CGSize)arg1 ;
+(BOOL)naui_isPad;
+(BOOL)naui_isUsingLandscapeOrientation;
-(id)init;
@end
