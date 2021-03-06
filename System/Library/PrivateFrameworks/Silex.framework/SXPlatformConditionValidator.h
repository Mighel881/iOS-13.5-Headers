/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating> {

	NSString* _platform;

}

@property (nonatomic,copy,readonly) NSString * platform;              //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)platform;
-(id)initWithPlatform:(id)arg1 ;
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
@end

