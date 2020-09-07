/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMBCloudZone, NAFuture, NSString;

@interface HMBShareOperation : HMFOperation <HMFLogging> {

	HMBCloudZone* _cloudZone;
	/*^block*/id _block;
	NAFuture* _future;

}

@property (readonly) HMBCloudZone * cloudZone;                      //@synthesize cloudZone=_cloudZone - In the implementation block
@property (copy,readonly) id block;                                 //@synthesize block=_block - In the implementation block
@property (readonly) NAFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)main;
-(id)block;
-(void)cancelWithError:(id)arg1 ;
-(NAFuture *)future;
-(HMBCloudZone *)cloudZone;
-(id)initWithCloudZone:(id)arg1 block:(/*^block*/id)arg2 ;
@end
