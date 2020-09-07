/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@class CARSessionStatus, NSString;

@interface SUInstallationConstraintMonitorCarplay : SUInstallationConstraintMonitorBase <CARSessionObserving> {

	BOOL _queue_CarplayConnected;
	CARSessionStatus* _queue_carSessionStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_carplayDidChange;
@end
