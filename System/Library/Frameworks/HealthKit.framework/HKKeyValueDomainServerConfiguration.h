/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSString;

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration {

	long long _category;
	NSString* _domainName;

}

@property (nonatomic,readonly) long long category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)category;
-(NSString *)domainName;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 ;
@end
