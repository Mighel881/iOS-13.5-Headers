/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;
	unsigned long long _browsedDeviceTypeMask;
	NSArray* _devices;

}

@property (assign,nonatomic) NSArray * devices;                           //@synthesize devices=_devices - In the implementation block
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
@property (assign) unsigned long long browsedDeviceTypeMask;              //@synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask - In the implementation block
-(id)init;
-(void)dealloc;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isBrowsing;
-(id)internalDevices;
-(unsigned long long)browsedDeviceTypeMask;
-(void)setBrowsedDeviceTypeMask:(unsigned long long)arg1 ;
@end

