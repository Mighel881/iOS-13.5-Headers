/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKPeripheralAvailabilityManager_iOS : NSObject {

	IOHIDManagerRef stylusHidManager;
	unsigned long long _currentAvailability;

}

@property (assign) unsigned long long currentAvailability;              //@synthesize currentAvailability=_currentAvailability - In the implementation block
+(BOOL)onlyDrawWithApplePencil;
-(id)init;
-(void)dealloc;
-(void)teardown;
-(void)stopMonitoringForPeripheralConnection;
-(void)postConnectionStatusNotification;
-(void)startMonitoringForPeripheralConnection;
-(unsigned long long)currentAvailability;
-(void)setCurrentAvailability:(unsigned long long)arg1 ;
@end

