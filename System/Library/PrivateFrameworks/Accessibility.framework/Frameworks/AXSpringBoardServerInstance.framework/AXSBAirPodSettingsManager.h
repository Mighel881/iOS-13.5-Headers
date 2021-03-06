/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
@class NSPointerArray, NSObject, AXDispatchTimer, NSMutableSet;

@interface AXSBAirPodSettingsManager : NSObject {

	NSPointerArray* _deviceListeners;
	BTSessionImplRef _session;
	BTLocalDeviceImplRef _localDevice;
	BTAccessoryManagerImplRef _accessoryManager;
	NSObject*<OS_dispatch_queue> _queue;
	AXDispatchTimer* _delayTimer;
	NSMutableSet* _deviceMap;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)start;
-(void)_applySettings;
-(id)initSharedInstance;
-(void)_probeAccessories;
-(void)_didConnectWithSession:(BTSessionImplRef)arg1 ;
-(void)_didDisconnect;
-(void)_beginDetach;
-(void)_retrieveSettingsFromNewDevices:(id)arg1 ;
-(void)_retrieveSettingsForAddress:(id)arg1 ;
-(void)_applySettingsForAddress:(id)arg1 ;
-(void)_serviceEventForDevice:(BTDeviceImplRef)arg1 serviceMask:(unsigned)arg2 eventType:(int)arg3 specificEvent:(unsigned)arg4 result:(int)arg5 ;
-(void)_accessoryEventForManager:(BTAccessoryManagerImplRef)arg1 event:(int)arg2 device:(BTDeviceImplRef)arg3 state:(int)arg4 ;
-(void)_sessionEventForSession:(BTSessionImplRef)arg1 event:(int)arg2 result:(int)arg3 ;
@end

