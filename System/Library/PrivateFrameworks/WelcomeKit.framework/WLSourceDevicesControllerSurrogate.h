/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKit/WLSourceDevicesController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface WLSourceDevicesControllerSurrogate : WLSourceDevicesController {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _wifiStarted;
	NSString* _deviceDiscoverySession;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
@end

