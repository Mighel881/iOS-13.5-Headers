/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload {

	NSArray* _hashDictionaries;
	NSArray* _domainRules;

}

@property (nonatomic,readonly) NSArray * hashDictionaries;              //@synthesize hashDictionaries=_hashDictionaries - In the implementation block
@property (nonatomic,readonly) NSArray * domainRules;                   //@synthesize domainRules=_domainRules - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(BOOL)isValidDomainRule:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(NSArray *)hashDictionaries;
-(NSArray *)domainRules;
@end

