/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface AMSPromiseResult : NSObject {

	NSError* _error;
	id _result;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id result;                         //@synthesize result=_result - In the implementation block
-(NSError *)error;
-(id)result;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
@end
