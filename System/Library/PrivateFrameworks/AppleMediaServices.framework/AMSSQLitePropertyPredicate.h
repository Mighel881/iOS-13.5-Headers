/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AMSSQLitePropertyPredicate : AMSSQLitePredicate <NSCopying> {

	NSString* _property;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)property;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
@end

