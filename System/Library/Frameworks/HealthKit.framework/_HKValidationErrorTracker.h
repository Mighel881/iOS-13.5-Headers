/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject {

	long long _errorCount;
	NSMutableString* _errorMessage;

}

@property (assign,nonatomic) long long errorCount;                        //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) NSMutableString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)init;
-(long long)errorCount;
-(NSMutableString *)errorMessage;
-(void)setErrorCount:(long long)arg1 ;
-(void)setErrorMessage:(NSMutableString *)arg1 ;
@end

