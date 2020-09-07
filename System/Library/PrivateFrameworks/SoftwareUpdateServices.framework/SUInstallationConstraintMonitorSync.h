/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/ATConnectionDelegate.h>

@class ATConnection, NSString;

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase <ATConnectionDelegate> {

	BOOL _queue_isSyncing;
	ATConnection* _queue_airTrafficConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)_queue_initilizaSyncState;
-(void)_queue_setSyncing:(BOOL)arg1 ;
@end
