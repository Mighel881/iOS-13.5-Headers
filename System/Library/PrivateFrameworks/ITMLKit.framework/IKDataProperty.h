/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDataAccessor.h>

@class NSString;

@interface IKDataProperty : IKDataAccessor {

	NSString* _property;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(NSString *)property;
@end
