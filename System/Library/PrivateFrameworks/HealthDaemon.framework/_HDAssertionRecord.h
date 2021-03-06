/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSHashTable;

@interface _HDAssertionRecord : NSObject {

	NSString* _assertionIdentifier;
	NSHashTable* _assertions;

}

@property (nonatomic,copy,readonly) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                         //@synthesize assertions=_assertions - In the implementation block
-(NSHashTable *)assertions;
-(NSString *)assertionIdentifier;
-(id)initWithAssertionIdentifier:(id)arg1 ;
@end

