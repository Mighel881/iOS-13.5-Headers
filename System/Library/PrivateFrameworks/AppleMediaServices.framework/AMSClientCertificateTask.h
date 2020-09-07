/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol OS_dispatch_queue;
@class NSObject, AMSKeychainOptions;

@interface AMSClientCertificateTask : AMSTask {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AMSKeychainOptions* _options;

}

@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (retain) AMSKeychainOptions * options;                            //@synthesize options=_options - In the implementation block
-(AMSKeychainOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(AMSKeychainOptions *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)performClientCertChainRequest;
-(id)_baaOptionsWithOptions:(id)arg1 error:(id*)arg2 ;
@end
