/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSString, HMBLocalZone, NSObject;

@interface HMDCameraClipImporter : HMFObject <HMFLogging> {

	NSString* _logIdentifier;
	HMBLocalZone* _localZone;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) HMBLocalZone * localZone;                            //@synthesize localZone=_localZone - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * logIdentifier;                            //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)logIdentifier;
-(HMBLocalZone *)localZone;
-(id)initWithLocalZone:(id)arg1 ;
-(id)importClipsWithImportData:(id)arg1 ;
@end
