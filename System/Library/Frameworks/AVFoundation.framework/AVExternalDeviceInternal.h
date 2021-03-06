/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVExternalDeviceDelegate, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVDispatchOnce, NSData, NSObject, NSMutableDictionary;

@interface AVExternalDeviceInternal : NSObject {

	OpaqueFigEndpointRef _figEndpoint;
	id<AVExternalDeviceDelegate> _delegate;
	AVWeakReference* _weakReference;
	NSArray* _HIDs;
	AVDispatchOnce* _makeHIDsOnlyOnce;
	NSData* _MFiCertSerial;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _oemIcons;
	NSArray* _screenInfo;
	NSObject*<OS_dispatch_queue> _viewAreasQueue;
	NSMutableDictionary* _currentViewAreas;
	AVDispatchOnce* _makeIconsOnlyOnce;

}
@end

