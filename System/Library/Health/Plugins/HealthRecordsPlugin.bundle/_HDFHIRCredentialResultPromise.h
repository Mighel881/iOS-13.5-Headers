/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
@class HDFHIRCredentialResult;

@interface _HDFHIRCredentialResultPromise : NSObject {

	HDFHIRCredentialResult* _result;
	os_unfair_lock_s _resultLock;

}

@property (nonatomic,readonly) HDFHIRCredentialResult * result; 
-(id)init;
-(HDFHIRCredentialResult *)result;
-(void)fulfillWithResult:(id)arg1 ;
@end
