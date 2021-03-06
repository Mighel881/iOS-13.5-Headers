/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _KSDeviceStateMonitor : NSObject {

	BOOL _isContentProtectionAvailable;

}

@property (assign,nonatomic) BOOL isContentProtectionAvailable;              //@synthesize isContentProtectionAvailable=_isContentProtectionAvailable - In the implementation block
+(BOOL)isRunningOnInternalBuild;
+(id)deviceStateMonitor;
-(id)init;
-(void)dealloc;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)isContentProtectionAvailable;
-(void)setIsContentProtectionAvailable:(BOOL)arg1 ;
@end

