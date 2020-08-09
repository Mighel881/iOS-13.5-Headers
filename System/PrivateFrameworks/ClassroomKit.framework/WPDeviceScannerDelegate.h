/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPDeviceScannerDelegate <NSObject>
@optional
-(void)scanner:(id)arg1 foundAnyDevice:(id)arg2 withData:(id)arg3;
-(void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
-(void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
-(void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;

@required
-(void)deviceScannerDidUpdateState:(id)arg1;

@end
